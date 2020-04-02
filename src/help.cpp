#include "help.h"

Help::Help()
{

}

Help::~Help()
{

}

std::string Help::GenerateHelpMsg(int argc, char* argv[])
{


    // Help output
    const char* helpOutput = "\e[39mVersion:  1.0.0 \
\nUsage:    scantekctl     <option>    <action>            <action args>\n\
    scantekctl       unit      monitor-brightness       .9\n\n\
network:    ipconflicts; find-unit                       \n\
idserver:   restart; stop; start; status; re-scan        \n\
scan:       reproduce-result; image-brightness; results  \n\
unit:       monitor-brightness; camera-brightness; info  \n\
db:         unsynched-scans; migrate-LVH                 \n";

    //std::cout << argc << "\n";
    std::string helpOpts[3] = {"help","-h","--help"};
    if ( ( argc == 1 ) || /* if scantekctl is run without an argument or
    if help is given as the only argument*/
    (std::find(std::begin(helpOpts), std::end(helpOpts), (argv)[1]) != std::end(helpOpts) && argc == 2) )
    {
        std::cout << helpOutput << "\n"; 
    }
    else if ( (argc % 2 ) != 0 )
    {     
        Cout c;
        c.O = "Error: Unexpected argument"; 
        c.Out(c.O, c.red);
    }

    return helpOutput; 
}



