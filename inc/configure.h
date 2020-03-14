/*
    Reads in any external configuration values
*/

// Project includes
#include "common.h"

class Configure
{
    public:
                            Configure                   ();
                            ~Configure                  ();
    std::map
    <std::string,
    std::string>            Initialize                  ();
    void                    CreateDefaultConfig         ();

};