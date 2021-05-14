#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* a[] = {"a1", "b2", "c3", "d5", "e6", "f7", "g8", "h9", "i10", "j11", "k12", "l13", "m14", "n15", "o16", "p17", "q18", "r19", "s20", "t21", "u22", "v23", "w24", "x25", "y26", "z27", "A28", "B29", "C30", "D31", "E32", "F33", "G34", "H35", "I36", "J37", "K38", "L39", "M40", "N41", "O42", "P43", "Q44", "R45", "S46", "T47", "U48", "V49", "W50", "X51", "Y52", "Z53"};


char encoded[200];

const char* encode(char* data){
    for(int i =0; i<strlen(data); i++){
        for(int j = 0; j < (sizeof(a)/sizeof(char *)); j++){
            if(data[i]==' '){
                strcat(encoded, "0");
                strcat(encoded, " ");
                break;
            }
            if(data[i]==a[j][0]){
                strcat(encoded, &(a[j][1]));
                strcat(encoded, " ");
                break;
            }
        }
       
    }
   return encoded;
}



int main(int argc, char* argv[]){
    
}