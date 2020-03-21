/*
    Reads in any external configuration values
*/

// Standard includes
#include "common.h"

class Config
{
    typedef std::map<std::string,std::string> configMap;

    public:
                                Config                      ();
                                ~Config                     ();

        void                    Initialize                  ();
        void                    CreateDefaultConfig         ();
        std::map    
        <std::string,   
        std::string>            Read                        ();

        // Modules in /etc/scantekctl/scantekctl.json
        // Default config in /etc/scantekctl/scantekctl.conf

        // CreateDefaultConfig()  
        std::ofstream os;  // Output stream
        // Default configs for scantekctl
        const char * conf_dir      = "/etc/scantekctl/";
        const char * conf_path     = "/etc/scantekctl/scantekctl.conf";  
        const char * module_root   = "/opt/scantekctl/modules/";          
        const char * module_config = "scantekctl.json";
        const char * ctl_config    = "scantekctl.conf";
        const char * bin_path      = "/usr/bin/";  // Store symlinks here

        // Read()
        configMap       ctlConf;  // Default config map
        std::ifstream   is; 
        std::string     il;
        std::string     key;
        std::string     value;

    private:


};