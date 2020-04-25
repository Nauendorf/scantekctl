#include "main.h"

int main(int argc, char*argv[])
{

    // Pass arguments to ParameterSet, interfaces with Execute
    // Execute the ParameterSet

    Help h(argc, argv);

    Module mod;

    //MyVecCharS dir = mod.ReadDirectory("/opt/scantekctl/mods");
    //for(MyVecCharS :: iterator it = dir.begin(); it != dir.end(); ++it)
    //{
//
    //    std::cout << *it << std::endl;
    //}
 
    //std::cout << mod.GetMD5Hash(argv[1]) << std::endl;;
    


    mod.GenerateModuleConfig();
    return 0;
}
