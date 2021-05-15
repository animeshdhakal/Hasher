#include <iostream>
#include "hasher.h"

int main()
{
    //Prints Encoded Data
    char buffer[200]; // Create a buffer
    encode("Hello World!", buffer); // Pass the Buffer
    std::cout << buffer << std::endl;;
    //Prints Decoded Data
    decode("80 8 27 27 48 0 61 48 9 27 20 41", buffer);
    std::cout << buffer  << std::endl;
    //Checks the Hash and the data
    std::cout << (check("Hello World!", "80 8 27 27 48 0 61 48 9 27 20 41")==0 ? "true" : "false") << std::endl;
    std::cout << (check("Hello World", "35 6 13 13 16 0 50 16 19 13 5 67")==0 ? "true" : "false") << std::endl;
}
