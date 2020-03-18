/*
    Reads in any external configuration values
*/

// Project includes
#include "common.h"

// 3rd Party Includes
#include <nlohmann/json.hpp>

class Configure
{
    public:
                            Configure                   ();
                            ~Configure                  ();
    std::map
    <std::string,
    std::string>            Initialize                  ();
    void                    CreateDefaultConfig         ();
    int test();

    // /etc/scantekctl/scantekctl.json

    std::string scriptsRoot;
    std::string scriptHash;
    std::string scriptName;
    std::string scriptDescription;






};