/*
    Reads in any external configuration values
*/

// Standard includes
#include "common.h"

// 3rd Party Includes
#include <nlohmann/json.hpp>

class Config
{
    public:
                                Config                      ();
                                ~Config                     ();

        void                    CreateDefaultConfig         ();
        void                    LoadModules                 ();
        std::map    
        <std::string,   
        std::string>            Read                        ();

        // Modules in /etc/scantekctl/scantekctl.json
        // Default config in /etc/scantekctl/scantekctl.conf

        // Read()
        std::ifstream is; 
        std::string il;

        // CreateDefaultConfig()
        std::map<std::string,std::string> dConf;  // Default config map
        std::ofstream os; 
        std::string ol;

        // Default configs for scantekctl
        std::string Module_Config;
        std::string ctl_Config;
        std::string Module_Root;
        std::string Config_Root;

        // LoadModules()
        nlohmann::json mConf;  // Module config json object
    



    private:


};