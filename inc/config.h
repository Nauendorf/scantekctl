/*
    Reads in any external configuration values
*/

// Standard includes
#include "common.h"

class Config
{

    public:
                            Config                          ();
                            ~Config                         ();
        void                Initialize                      ();
        void                CreateDefaultConfig             ();
        MyMap               Read                            ();

        // CreateDefaultConfig()  
        std::ofstream os;  // Output stream
        // Default configs for scantekctl
        const char * conf_dir      = "/etc/scantekctl/";
        const char * ctl_config    = "/etc/scantekctl/scantekctl.conf";         
        const char * bin_path      = "/usr/bin/";  // Store symlinks here

        // Read()
        MyMap           ctlConf;  // Default config map
        std::ifstream   is; 
        std::string     il;
        std::string     key;
        std::string     value;

    private:


};