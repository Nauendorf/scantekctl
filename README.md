# scantek-cli
cli tool for investigating scan results


./                <-- Project root
  -bin            <-- Location of compiled binaries
    -cli
  -inc            <-- Location of project includes
    -class.id.h   <-- Locaiton of class specific includes
    -common.h     <-- Common contains all generic includes, avoids include errors
    -main.h       <-- Shouldn't need to contain any protos, just other includes
  -src            <-- Contains all source code files
    -class.id.cpp
    -main.cpp
  -README.md
