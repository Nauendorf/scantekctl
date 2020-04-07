#include "module.h"

Module::Module()
{
  
}

Module::~Module()
{

}

std::vector<char*> Module::ReadDirectory(const char * dirPath)
{
    DIR *dir;
    std::vector<char*> dirList;
    struct dirent *ent;
    try
    {
        if ((dir = opendir (dirPath)) != NULL) 
        {
            while ((ent = readdir (dir)) != NULL) 
            {             
                dirList.push_back(ent->d_name);
            }               
        } 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return dirList;
}

std::vector<char> Module::GenerateModuleID(int length)
{
    int n = charSet.length(); 
    srand( time(NULL) );
    char char_array[n + 1]; 
    strcpy(char_array, charSet.c_str()); 

    for (int i=0; i < 20; i++)
    {
        int RandIndex = rand() % 62;
        moduleID.push_back(char_array[RandIndex]);
    }  

    return moduleID;
}

std::string Module::md5_from_file(std::string path)
{
    unsigned char result[MD5_DIGEST_LENGTH];
    boost::iostreams::mapped_file_source src(path);
    MD5((unsigned char*)src.data(), src.size(), result);

    std::ostringstream sout;
    sout<<std::hex<<std::setfill('0');
    for(auto c: result) sout<<std::setw(2)<<(int)c;

    return sout.str();
}



// Loops through Module_Root and creates an entry for any new scripts 
void Module::AddModules()
{
    
    // Loop through Module_Root for script files
    std::vector<char *> dirList = ReadDirectory(module_path);
    for(std::vector<char *> :: iterator it = dirList.begin(); it != dirList.end(); ++it)
    {
        //mod = GetModule();
        if ( true )
        {
            // If the filename does not exist in module_config go ahead and obtain all necessary information about it
            // Generate a json entry with the info
            mConf["scriptPath"];       
            mConf["scriptHash"];       
            mConf["scriptName"];       
            mConf["scriptDescription"];
        }


    }

    // Write it out to the config file
    std::ofstream o(mConf);
    o << std::setw(4) << mConf << std::endl;

}

//Module Module::GetModule()
//{
//    // read a JSON file
//    //std::ifstream i("file.json");
//    //i >> j;
//    Module t;
//    return t;
//}

void Execute()
{


}