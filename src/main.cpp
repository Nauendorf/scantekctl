#include "../inc/main.h"

int main(int argc, char*argv[])
{
    
    Document *d = new Document;

    if ( ( ( strcmp((argv)[1], "help") == 0 ) || 
    ( strcmp((argv)[1], "-h") == 0 ) ) && 
    ( argc == 2 ) )
    {
        std::cout << helpOutput << "\n";
        return -1;
    }
    else if ( (argc % 2 ) == 0 )
    {
        std::cout << "\033[31mError: Unexpected argument MEOW\033[0m\n" << "\n";
        return -1;       
    }
        
    for (int i=1; i<argc; i++)
    {
        if (( strcmp((argv)[i], "id") == 0 ) )
        {
            int j = i+1;
            try
            {   
                cv::Mat img = cv::imread((argv)[j]);
                //float irBrightness  = d->getIrBrightness(img);
                //float uvBrighPecent = d->getUvPercentage(img);
            }
            catch(const std::exception& e)
            {   std::cerr << e.what() << '\n';  }
        }
        else
        {
            std::cout << "\033[31mError: Unexpected argument\033[0m\n" << "\n";
            return -1;
        }  
    } 
};
