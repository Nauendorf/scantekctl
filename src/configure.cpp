#include "configure.h"
 
Config::Config()
{
    Config::Read();
}

Config::~Config()
{

}

std::map<std::string,std::string> Config::Read()
{
    try {

        is.open("/etc/scantekctl.conf");
        if (is.is_open()) 
        {
            while (std::getline(is, il))
            {
                int num = il.find('=');

            }

             
        }
        else 
        {
            Config::CreateDefaultConfig(); 
        }   

    } catch ( std::ifstream::failure e ) {
        throw "Unable to read configuration file at /etc/scantekctl.conf"; }
    
    return dConf;
}

// Ddefauly configurations are written if for some reason they do not exist
void Config::CreateDefaultConfig()
{
    // Default configs for scantekctl
    std::string Module_Config = "scantekctl.json";
    std::string ctl_Config    = "scantekctl.conf";
    std::string Module_Root   = "/opt/scantekctl/modules";

    os << Module_Config;
    os << ctl_Config;   
    os << Module_Root;  
    os << Config_Root;    

    return;
}

// Loops through Module_Root 
void Config::LoadModules()
{
    // TO DO:
    // Loop through Module_Root for script files
    // Compare each with scantekctl.mod.json
    // If the module does not yet exist then create an entry then create a symlink in /usr/bin
    mConf["scriptPath"];       
    mConf["scriptHash"];       
    mConf["scriptName"];       
    mConf["scriptDescription"];

    // read a JSON file
    //std::ifstream i("file.json");
    //i >> j;

    std::ofstream ctl_o(mConf["ctl_Config"]);
    ctl_o << std::setw(4) << mConf << std::endl;

}

