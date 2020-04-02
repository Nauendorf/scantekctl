#include "cout.h"

Cout::Cout()
{

}

Cout::~Cout()
{
    
}

void Cout::Out(std::string output, Colour colour)
{
    switch (colour)
    {
    case Colour::red :
        std::cout << "\033[31m" << output << "\n";
        break;
    case Colour::green :
        std::cout << "\033[32m" << output << "\n";
        break;
    case Colour::yellow :
        std::cout << "\033[33m" << output << "\n";
        break;
    case Colour::blue :
        std::cout << "\033[34m" << output << "\n";
        break;
       
    default:
        throw;
    }

}
