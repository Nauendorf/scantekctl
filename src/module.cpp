#include "module.h"

Module::Module()
{

}

Module::~Module()
{

}

void Module::read_directory(const std::string& dir)
{

}

// Loops through Module_Root 
void Module::LoadModules()
{
    // TO DO:
    // Loop through Module_Root for script files


    // Compare each with scantekctl.json
    // If the module does not yet exist then create an entry
    mConf["scriptPath"];       
    mConf["scriptHash"];       
    mConf["scriptName"];       
    mConf["scriptDescription"];



    std::ofstream o(mConf["ctl_Config"]);
    o << std::setw(4) << mConf << std::endl;

}

Module Module::GetModule()
{
    // read a JSON file
    //std::ifstream i("file.json");
    //i >> j;
    Module t;
    return t;
}

void Execute()
{


}