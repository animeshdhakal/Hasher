#include <stdio.h>
#include "hasher.h"

int main()
{
    //Prints Encoded Data
    printf("%s\n", encode("Hello World!"));
    //Prints Decoded Data
    printf("%s\n", decode("35 6 13 13 16 0 50 16 19 13 5 67"));
    //Checks the Hash and the data
    printf("%s\n", (check("Hello World!", "35 6 13 13 16 0 50 16 19 13 5 67")==0 ? "true" : "false"));
    printf("%s\n", (check("Hello World", "35 6 13 13 16 0 50 16 19 13 5 67")==0 ? "true" : "false"));
}
