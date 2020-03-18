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

    j["pi"] = 3.141;


    // write prettified JSON to another file
    std::ofstream o("pretty.json");
    o << std::setw(4) << j << std::endl;

    return;
}

std::map<std::string,std::string> Configure::Initialize()
{




    // read a JSON file
    //std::ifstream i("file.json");
    //i >> j;



    s.open("/etc/scantekctl.conf");
    if (s.fail());
    {
        // Create default config file
    }


    std::map<std::string,std::string> test; 
    return test; 
}


