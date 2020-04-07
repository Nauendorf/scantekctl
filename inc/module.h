/*
    Creates instance of a Module and executes the Module based on args 
    given by parameterset
*/

// Project includes
#include "common.h"

// 3rd Party Includes
#include <nlohmann/json.hpp>

class Module
{
    public:
                                    Module                  ();
                                    ~Module                 ();
        
        Module                      GetModule               ();
        void                        AddModules              ();
        void                        Execute                 ();
        std::vector<char*>          ReadDirectory           (const char * dirPath);
        MyVecChar                   GenerateModuleID        (int length);
        std::string md5_from_file(std::string path);

        // AddModules()   
        std::vector<char> moduleID;
        char * scriptHash;
        char * scriptName;
        char * scriptDescription;
        char * scriptParams;  

    private:
        nlohmann::json mConf;  // Module config json object
        const char * module_path  = "/opt/scantekctl/mods/scantekctl.json";
        const std::string charSet = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"; 


};


