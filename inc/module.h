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

        void                Execute             ();
        void                LoadModules         ();


        // LoadModules()
        nlohmann::json mConf;  // Module config json object


    private:





};


