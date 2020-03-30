#include "parameterset.h"

ParameterSet::ParameterSet(int argc, char*argv[])
{
    ParameterSet::ParseArgs(argc, argv);
}

ParameterSet::~ParameterSet()
{

}



MyMap ParameterSet::ParseArgs(int argc, char* argv[])
{
    MyMap mp;
    return mp;
}