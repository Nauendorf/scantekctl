/*
    Creates instance of a Module and executes the Module based on args 
    given by parameterset
*/

// Project includes
#include "common.h"

class Cout
{
    public:
        enum                    Colour                {red, green, yellow, blue};
                                Cout                  ();
                                ~Cout                 ();

        void                    Out                   (std::string output, Colour colour);

        //  Output text
        std::string O;  

    private:


};

