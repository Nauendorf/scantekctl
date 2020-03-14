#include "argsparser.h"

ArgsParse::ArgsParse(int argc, char*argv[])
{
    ArgsParse::parseArgs(argc, argv);
}

ArgsParse::~ArgsParse()
{

}

std::map<std::string,std::string> ArgsParse::parseArgs(int argc, char* argv[])
{
    std::cout << argc << "\n";
    if ( ( ( strcmp((argv)[1], "help") == 0 ) || 
    ( strcmp((argv)[1], "-h") == 0 ) ) && 
    ( argc == 2 ) )
    {
        std::cout << helpOutput << "\n";
        std::map<std::string,std::string> test; 
        return test; 
    }
    else if ( (argc % 2 ) != 0 )
    {
        std::cout << "\033[31mError: Unexpected argument MEOW\033[0m\n" << "\n";
        std::map<std::string,std::string> test; 
        return test; 
    }
    std::map<std::string,std::string> test; 
    return test; 

}