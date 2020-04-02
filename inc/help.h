/*
    Generates a help file based on provided script meta data
*/

// Project includes
#include "common.h"

class Help
{
    public:
                                Help                        ();
                                ~Help                       ();


        std::string             GenerateHelpMsg             (int argc, char* argv[]);
    

        std::string version;
        const std::string red    = "\033[31m";
        const std::string green  = "\033[32m";
        const std::string yellow = "\033[33m";
        const std::string blue = "\033[94m";
    private:



};