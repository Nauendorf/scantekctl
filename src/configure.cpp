#include "configure.h"
 
Configure::Configure()
{

    Configure::Initialize();

}

Configure::~Configure()
{

}

void Configure::CreateDefaultConfig()
{

    return;
}

std::map<std::string,std::string> Configure::Initialize()
{

    std::ifstream s;
    std::string line;
    nlohmann::json j;


    // read a JSON file
    std::ifstream i("file.json");
    nlohmann::json j;
    i >> j;

    // write prettified JSON to another file
    std::ofstream o("pretty.json");
    o << std::setw(4) << j << std::endl;

    s.open("/etc/scantekctl.conf");
    if (s.fail());
    {
        // Create default config file
    }


    std::map<std::string,std::string> test; 
    return test; 
}


