/*
    Author:  David Nauendorf
    Date:    March 2020
    Purpose: 
             Collection of functions for investigating
             id classification and fake detection
*/

// Library includes


// Project includes
#include "../inc/common.h"
#include "../inc/class.id.h"
#include "../inc/argParse.h"

// Const defines
const char* helpOutput = "\e[39mVersion:  1.0.0 \
\nUsage:    MakeExec -i <script file>  ||  MakeExec -s  ||  MakeExec -i <script file> -l <link path> \
\n\
   -i,     Input file to make executable\n \
  -s,     Make self executable  (optional)\n \
  -l,     Specify symLink path (optional);\n \
          default is /usr/bin\n";
