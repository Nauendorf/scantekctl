/*
    Argument parser
*/

// Project includes
#include "common.h"

template<typename T>
//template<typename First, typename ... Strings>
void        addParameter            (std::string name, T paramType);
void        addParameterSet         (std::string name, std::string setName);
void        removeParameter         (std::string name);

std::map<std::string,std::string>   parseArgs   (int argc, char* argv[]);
