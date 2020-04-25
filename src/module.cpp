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

void Module::AddModules ()
{

}

// Loops through modulePath and creates an entry for any new scripts 
void Module::GenerateModuleConfig()
{   
    // Loop through Module_Root for script files
    MyVecCharS dirList = ReadDirectory(modulePath);
    for(MyVecCharS :: iterator it = dirList.begin(); it != dirList.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    for(MyVecCharS :: iterator it = dirList.begin(); it != dirList.end(); ++it)
    {
        std::cout << "Got here! " << std::endl;
        std::cout << *it << std::endl;
        moduleID = GetMD5Hash(*it);
        std::cout << "GetMD5Hash " << std::endl;
        scriptName = *it;
        std::cout << "ONE " << std::endl;
        oss << modulePath << '/' << scriptName;
        std::cout << "TWO " << std::endl;
        scriptPath = oss.str();
        scriptParams = "param1;param2;param3";
        scriptDescription = "Test description";

        mConf["moduleID"]   = moduleID;
        mConf["scriptPath"] = scriptPath;            
        mConf["scriptName"] = scriptName;     
        // Get these by parsing comment block at the top of each script
        mConf["scriptParams"] = scriptParams;   
        mConf["scriptDesc"]   = scriptDescription;

        
        // Write it out to the config file
        std::ofstream o(moduleConf);
        try
        {
            std::cout << "Got to here" << std::endl;
            o << mConf << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
        
    }


}

MyVecStr Module::GetScriptInfo(std::string scriptPath)
{
    // Read the script
    // Get the script name
    // Get an MD5 hash for moduleID
    // 
    MyVecStr t;

    try {

        //is.open( scriptPath, std::ios::in | std::ios::app );
        //if ( is.is_open() )
        //{
        //    while ( std::getline(is, il) )
        //    {
        //        int num = il.find('=');
        //        if ( num != -1 )
        //        {
        //            key = il.substr(0, num);
        //            value = il.substr(num + 1, il.length());
        //            ctlConf[key]=value;
        //        }                
        //    }     
        //}

    } catch ( std::ifstream::failure e ) 
    { throw "Unable to read configuration file at /etc/scantekctl.conf";  }

    return t;
}

//Module Module::GetModule()
//{
//    // read a JSON file
//    //std::ifstream i("file.json");
//    //i >> j;
//    Module t;
//    return t;
//}

// Exectue should take a ParameterSet object 
void Execute()
{


}