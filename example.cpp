#include <iostream>
#include "hasher.h"

int main()
{
    //Prints Encoded Data
    std::cout << encode("Hello World!") << std::endl;;
    //Prints Decoded Data
    std::cout << decode("35 6 13 13 16 0 50 16 19 13 5 67") << std::endl;
    //Checks the Hash and the data
    std::cout << (check("Hello World!", "35 6 13 13 16 0 50 16 19 13 5 67")==0 ? "true" : "false") << std::endl;
    std::cout << (check("Hello World", "35 6 13 13 16 0 50 16 19 13 5 67")==0 ? "true" : "false") << std::endl;
}
