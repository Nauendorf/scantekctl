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

    s.open("/etc/scantekctl.conf");
    if (s.fail());
    {
        // Create default config file
    }


    std::map<std::string,std::string> test; 
    return test; 
}


