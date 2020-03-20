/*
    Argument parser
    Creates a parameter set to pass to Module class
*/

// Project includes
#include "common.h"

class ArgsParse
{

    public:
                                ArgsParse               (int argc, char*argv[]);
                                ~ArgsParse              ();

        template<typename T>
        void                    addParameter            (std::string name, T paramType);
        void                    addParameterSet         (std::string name, std::string setName);
        void                    removeParameter         (std::string name);
        std::string             GenerateHelpMsg         ();

        std::map
        <std::string,
        std::string>            parseArgs               (int argc, char* argv[]);

        // Help output
        const char* helpOutput = "\e[39mVersion:  1.0.0 \
        \nUsage:    scantekctl     <option>    <action>            <action args>\n\
          scantekctl       unit      monitor-brightness       .9\n\n\
        network:    ipconflicts; find-unit                       \n\
        idserver:   restart; stop; start; status; re-scan        \n\
        scan:       reproduce-result; image-brightness; results  \n\
        unit:       monitor-brightness; camera-brightness; info  \n\
        db:         unsynched-scans; migrate-LVH                 \n";

};