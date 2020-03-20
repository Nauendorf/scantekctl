#include "configure.h"

Config::Config()
{
    Initialize();
}

Config::~Config()
{

}

void Config::Initialize()
{
    DIR* dir_module_config = opendir(conf_dir);
    if ( !dir_module_config ) {   int scantekctlDir = mkdir(conf_dir, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);   }

    DIR* dir_module_root = opendir(conf_dir);
    if ( !dir_module_root ) {   int scantekctlDir = mkdir(conf_dir, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);   }

    is.open(conf_dir, std::ios::in | std::ios::app | std::ios::binary);
    if ( is.fail() == true ) {   CreateDefaultConfig();  }
}

std::map<std::string,std::string> Config::Read()
{  
    try {

        is.open( "/etc/scantekctl/scantekctl.conf/", std::ios::in | std::ios::app );
        if ( is.is_open() )
        {
            while ( std::getline(is, il) )
            {
                int num = il.find('=');

                if ( num != -1 )
                {
                    key = il.substr(0, num);
                    value = il.substr(num + 1, il.length());
                    ctlConf[key]=value;
                }                
            }     
        }

    } catch ( std::ifstream::failure e ) 
    { throw "Unable to read configuration file at /etc/scantekctl.conf";  }
    
    is.close();
    return ctlConf;
}

void Config::CreateDefaultConfig()
{

    os.open( conf_path, std::ios::out | std::ios::app );  
    if ( os.is_open() ) 
    {
        os << "module_config=" << Config::module_config;
        os << "ctl_config=" << Config::ctl_config;   
        os << "module_root=" << Config::module_root;  
        os << "bin_path=" << Config::bin_path;    
        os.close();
    }

    return;
}
 

