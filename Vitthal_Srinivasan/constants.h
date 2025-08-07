#pragma once
//before namespace usage
// inline const double pi{3.14159};
// inline const double e{2.71828};
//this pragma once directive allows only one .cpp file or translational unit to inherit the file
//however if multiples files (.cpp) tend to pull this constants then they end up with their own 
//definitions / declarations of the constants pi and e.
//"inline" keyword tend to stop the above scenario where creation multiple declaration or definition
//happens, the resolving of the issue is done by linker during run time that's y the inline keyword is important
//Alos the keyword inline variables act like they were a global variable among other files

//after namespace usage


namespace constants{
    inline const double pi{3.14159};
    inline const double e{2.71828};
}//access through "constants ::" 