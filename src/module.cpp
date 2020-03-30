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

// Loops through Module_Root and creates an entry for any new scripts 
void Module::AddModules()
{
    
    // Loop through Module_Root for script files
    Module mod = Module();
    std::vector<char *> dirList = mod.ReadDirectory("/home/david");
    for(std::vector<char *> :: iterator it = dirList.begin(); it != dirList.end(); ++it)
    {
        mod = GetModule();
        if ( true )
        {
            // If the filename does not exist in module_config go ahead and obtain all necessary information about it
            // Generate a json entry with the info
            mConf["scriptPath"];       
            mConf["scriptHash"];       
            mConf["scriptName"];       
            mConf["scriptDescription"];
        }


    }

    // Write it out to the config file
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