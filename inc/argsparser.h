/*
    Argument parser
*/

// Project includes
#include "common.h"

class ArgsParse
{

    public:
                            ArgsParse               (int argc, char*argv[]);
                            ~ArgsParse              ();

    template<typename T>
    void                    addParameter            (std::string name, T paramType);
    void                    addParameterSet         (std::string name, std::string setName);
    void                    removeParameter         (std::string name);

    std::map
    <std::string,
    std::string>            parseArgs               (int argc, char* argv[]);

    // Const defines
    const char* helpOutput = "\e[39mVersion:  1.0.0 \
    \nUsage:    MakeExec -i <script file>  ||  MakeExec -s  ||  MakeExec -i <script file> -l <link path> \
    \n\
    -i,     Input file to make executable\n \
    -s,     Make self executable  (optional)\n \
    -l,     Specify symLink path (optional);\n \
            default is /usr/bin\n";

};