#include "module.h"

Module::Module()
{

}

Module::~Module()
{

}

std::vector<char*> Module::ReadDirectory(const char * dirPath)
{
    DIR *dir;
    std::vector<char*> dirList;
    struct dirent *ent;
    try
    {
        if ((dir = opendir (dirPath)) != NULL) 
        {
            while ((ent = readdir (dir)) != NULL) 
            {             
                dirList.push_back(ent->d_name);
            }               
        } 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return dirList;
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