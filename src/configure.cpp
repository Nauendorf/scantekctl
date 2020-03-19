#include "configure.h"
 
Configure::Configure()
{

    Configure::Initialize();

}

Configure::~Configure()
{

}

std::map<std::string,std::string> Configure::Initialize()
{
    // read a JSON file
    //std::ifstream i("file.json");
    //i >> j;

    s.open("/etc/scantekctl.conf");
    if (s.fail());
    {
        // Create default config file
    }

    std::map<std::string,std::string> test; 
    return test; 
}

// Ddefauly configurations are written if for some reason they do not exist
void Configure::CreateDefaultConfig()
{

    dConf["Module_Root"] = "/op/scantekctl/modules";
    dConf["Config_Root"] = "/etc/scantekctl";


    // write prettified JSON to another file
    std::ofstream o("pretty.json");
    o << std::setw(4) << dConf << std::endl;

    return;
}

void Configure::LoadModules()
{
    // TO DO:
    // Loop through Module_Root for script files
    // Compare each with scantekctl.mod.json
    // If the module does not yet exist then create an entry then create a symlink in /usr/bin

}

