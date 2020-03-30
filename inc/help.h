/*
    Generates a help file based on provided script meta data
*/

// Project includes
#include "common.h"

class Help
{

    public:
                                Help                    ();
                                ~Help                   ();

    std::string                 GenerateHelpMsg         (int argc, char* argv[]);


    private:
};