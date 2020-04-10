#include "main.h"

int main(int argc, char*argv[])
{

    // Pass arguments to ParameterSet, interfaces with Execute
    // Execute the ParameterSet

    Help h(argc, argv);

    Module mod;

 
    std::cout<< mod.GetMD5Hash(argv[1]);
    return 0;



}
