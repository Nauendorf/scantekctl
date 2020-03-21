/*
    Creates instance of a Module and executes the Module based on args 
    given by argsParser
*/

// Project includes
#include "common.h"

// 3rd Party Includes
#include <nlohmann/json.hpp>

class Module
{
    public:
                            Module              ();
                            ~Module             ();

        Module              GetModule           ();
        void                LoadModules         ();
        void                Execute             ();
        static void         read_directory      (const std::string& name);


        // LoadModules()
        nlohmann::json mConf;  // Module config json object


    private:





};


