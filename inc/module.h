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

        // AddModules()   
        char * scriptPath;
        char * scriptHash;
        char * scriptName;
        char * scriptDescription;
        char * scriptParams;  

    private:
        nlohmann::json mConf;  // Module config json object
        const char * module_config  = "/opt/scantekctl/modules/scantekctl.json";

};


