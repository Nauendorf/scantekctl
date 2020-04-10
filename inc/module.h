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
        std::string                 GenerateModuleID        (int length);
        std::string                 GetMD5Hash              (std::string path);

        // AddModules()   
        std::string moduleID;
        char * scriptHash;
        char * scriptName;
        std::string scriptPath;
        char * scriptParams;  
        char * scriptDescription;

        nlohmann::json mConf;    // Module config json object
        std::ostringstream oss;  // Output stream for json config

    private:

        const char * modulePath  = "/opt/scantekctl/mods/";
        const char * moduleConf  = "/opt/scantekctl/scantekctl.json";

        // ReadDirectory()
        DIR *dir;
        MyVecCharS dirList;
        struct dirent *ent;
        
        // GenerateModuleID()
        const std::string charSet = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"; 
        const int n = charSet.length();
        std::vector<char> vec;

        // GetMD5Hash()
        unsigned char result[MD5_DIGEST_LENGTH];
        std::ostringstream sout;
        


};


