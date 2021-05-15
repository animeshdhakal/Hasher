#include <stdio.h>
#include "hasher.h"

int main()
{
    //Prints Encoded Data
    char buffer[200];
    encode("Hello World!", buffer);
    printf("%s\n", buffer);
    //Prints Decoded Data
    decode("80 8 27 27 48 0 61 48 9 27 20 41", buffer);
    printf("%s\n", buffer);
    //Checks the Hash and the data
    printf("%s\n", (check("Hello World!", "80 8 27 27 48 0 61 48 9 27 20 41")==0 ? "true" : "false"));
    printf("%s\n", (check("Hello World", "35 6 13 13 16 0 50 16 19 13 5 67")==0 ? "true" : "false"));
}
