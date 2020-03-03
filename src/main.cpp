#include "../inc/main.h"



int main(int argc, char*argv[])
{
    if ( (argc % 2) == 0 )
    {   std::cerr << "\033[31mError: Unexpected argument\033[0m\n"; }

    while (*++argv)
    {

        switch ((*argv)[1])
        {
            case 'h':
                std::cout << helpOutput << "\n";
                break;
            
            default:
                break;
        }
    } 
};