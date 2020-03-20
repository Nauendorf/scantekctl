#include "module.h"


// Loops through Module_Root 
void Module::LoadModules()
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