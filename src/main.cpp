#include "main.h"

int main(int argc, char*argv[])
{


    Help h(argc, argv);

    Module mod;
    int length = 10;
    std::vector<char> str = mod.GenerateModuleID(20);
    std::string s(str.begin(), str.end());
    std::cout << s << "\n"; 


    if(argc != 2) {
        std::cerr<<"Must specify the file\n";
        exit(-1);
    }

    std::cout<< mod.md5_from_file(argv[1])<<"  "<<argv[1]<<std::endl;
    return 0;



}
