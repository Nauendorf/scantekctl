/*
    Argument parser
    Creates a parameter set to pass to Module class
*/

// Project includes
#include "common.h"
#include "help.h"

class ParameterSet
{
    public:
                                  ParameterSet               (int argc, char*argv[]);
                                  ~ParameterSet              ();
  
        template<typename T>  
        void                      AddParameter            (std::string name, T paramType);
        void                      AddParameterSet         (std::string name, std::string setName);
        void                      RemoveParameter         (std::string name);
        MyMap                     ParseArgs               (int argc, char* argv[]);



};