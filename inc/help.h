/*
    Generates a help file based on provided script meta data
*/

// Project includes
#include "common.h"
#include "cout.h"

class Help
{
    public:
                                Help                        (int argc, char* argv[]);
                                ~Help                       ();

        std::string             GenerateHelpMsg             (int argc, char* argv[]);
    
        std::string version;

    private:



};