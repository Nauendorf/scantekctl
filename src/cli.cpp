#include "exp3.h"

class CliOptions
{

    
        const char* help = "\e[39mVersion:  1.0.0 \
\nUsage:    MakeExec -i <script file>  ||  MakeExec -s  ||  MakeExec -i <script file> -l <link path> \
\n\
   -i,     Input file to make executable\n \
  -s,     Make self executable  (optional)\n \
  -l,     Specify symLink path (optional);\n \
          default is /usr/bin\n";


};

int main(int argc, char*argv[])
{

    int aflag = 0;
    int bflag = 0;
    char *cvalue = NULL;
    int index;
    int c;

    opterr = 0;

        const char* help = "\e[39mVersion:  1.0.0 \
\nUsage:    MakeExec -i <script file>  ||  MakeExec -s  ||  MakeExec -i <script file> -l <link path> \
\n\
   -i,     Input file to make executable\n \
  -s,     Make self executable  (optional)\n \
  -l,     Specify symLink path (optional);\n \
          default is /usr/bin\n";

    while ((c = getopt (argc, argv, "abch:")) != -1)
        switch (c)
        {
            case 'h':
            fprintf (stdout, help, optopt);
            case 'a':
            aflag = 1;
            break;
            case 'b':
            bflag = 1;
            break;
            case 'c':
            cvalue = optarg;
            break;
            case '?':
            if (optopt == 'h')
                fprintf (stdout, help, optopt);
            if (optopt == 'c')
                fprintf (stderr, "Option -%c requires an argument.\n", optopt);
            else if (isprint (optopt))
                fprintf (stderr, "Unknown option `-%c'.\n", optopt);
            else
                fprintf (stderr,
                        "Unknown option character `\\x%x'.\n",
                        optopt);
            return 1;
            default:
            abort();
        }

        printf ("aflag = %d, bflag = %d, cvalue = %s\n",
                aflag, bflag, cvalue);

        for (index = optind; index < argc; index++)
        printf ("Non-option argument %s\n", argv[index]);
        return 0;
      
};