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

        void                    Out                   (std::string O, Colour colour);

        //  Output text
        std::string O;  
        std::string v = "\e[39mVersion:  1.0.0";
        std::string U = "\nUsage:    scantekctl     <option>    <action>";

    private:


};

