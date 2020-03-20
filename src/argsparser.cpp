#include "argsparser.h"

ArgsParse::ArgsParse(int argc, char*argv[])
{
    ArgsParse::parseArgs(argc, argv);
}

ArgsParse::~ArgsParse()
{

}

std::string ArgsParse::GenerateHelpMsg()
{
    return "string";
}

std::map<std::string,std::string> ArgsParse::parseArgs(int argc, char* argv[])
{
    //std::cout << argc << "\n";
    std::string helpOpts[3] = {"help","-h","--help"};
    if ( ( argc == 1 ) || /* if scantekctl is run without an argument or
    if help is given as the only argument*/
    (std::find(std::begin(helpOpts), std::end(helpOpts), (argv)[1]) != std::end(helpOpts) && argc == 2) )
    {
        std::cout << helpOutput << "\n";
        std::map<std::string,std::string> test; 
        return test; 
    }
    else if ( (argc % 2 ) != 0 )
    {
        std::cout << "\033[31mError: Unexpected argument\033[0m\n" << "\n";
        std::map<std::string,std::string> test; 
        return test; 
    }

    std::map<std::string,std::string> test; 
    return test; 
}