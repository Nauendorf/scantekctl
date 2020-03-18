/*
    Reads in any external configuration values
*/

// Standard includes
#include "common.h"

// 3rd Party Includes
#include <nlohmann/json.hpp>

class Configure
{
    public:
                            Configure                   ();
                            ~Configure                  ();

    void                    CreateDefaultConfig         ();
    int test();

    // 
    std::string scriptsRoot;
    std::string scriptHash;
    std::string scriptName;
    std::string scriptDescription;

    // Default config in /etc/scantekctl/scantekctl.json
    nlohmann::json j;
    std::ifstream s;
    std::string line;


    private:

    std::map
    <std::string,
    std::string>            Initialize                  ();




};