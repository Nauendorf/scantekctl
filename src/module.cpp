#include "module.h"

Module::Module()
{
  
}

Module::~Module()
{

}

std::vector<char*> Module::ReadDirectory(const char * dirPath)
{
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

std::string Module::GenerateModuleID(int length)
{
    srand( time(NULL) );
    char char_array[n + 1]; 
    strcpy(char_array, charSet.c_str()); 

    for (int i=0; i < 20; i++)
    {
        int RandIndex = rand() % 62;
        vec.push_back(char_array[RandIndex]);
    }  
    
    std::string s(vec.begin(), vec.end());
    moduleID = s;
    return moduleID;
}

std::string Module::GetMD5Hash(std::string path)
{
    boost::iostreams::mapped_file_source src(path);
    MD5((unsigned char*)src.data(), src.size(), result);
    sout<<std::hex<<std::setfill('0');
    for(auto c: result) sout<<std::setw(2)<<(int)c;
    return sout.str();
}

// Loops through modulePath and creates an entry for any new scripts 
void Module::AddModules()
{   
    oss << modulePath << '/' << scriptName;
    scriptPath = oss.str();

    // Loop through Module_Root for script files
    MyVecCharS dirList = ReadDirectory(modulePath);
    for(MyVecCharS :: iterator it = dirList.begin(); it != dirList.end(); ++it)
    {
        mConf["moduleID"]   = moduleID;
        mConf["scriptPath"] = scriptPath;       
        mConf["scriptHash"] = scriptHash;       
        mConf["scriptName"] = scriptName;       
        mConf["scriptDesc"] = scriptDescription;
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