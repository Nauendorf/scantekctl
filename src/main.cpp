#include "main.h"

int main(int argc, char*argv[])
{

    Module mod;
    mod = Module();
    std::vector<char *> dirList;
    dirList = mod.ReadDirectory("/home/david");
    for(std::vector<char *> :: iterator it = dirList.begin(); it != dirList.end(); ++it)
    {
    	printf("%s\n", *it);
    }

    ArgsParse ap = ArgsParse(argc, argv);
    Config cf;




}


