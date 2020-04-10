/*
    Contains any library common to more than one class
*/

#include <iomanip>
#include <fstream>
#include <iostream>
#include <string>
#include <map>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <openssl/md5.h>
#include <boost/iostreams/device/mapped_file.hpp>
#include <iomanip>
#include <sstream>

typedef std::map<std::string,std::string> MyMap;
typedef std::vector<std::string> MyVecStr;
typedef std::vector<char> MyVecChar;
typedef std::vector<char*> MyVecCharS;
typedef std::vector<int> MyVecInt;