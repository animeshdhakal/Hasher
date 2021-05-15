#pragma once
#include <stdlib.h>
#include <string.h>

const char* a[] = {"a1", "A28", "154", "\\80", "b2", "B29", "255", "/81", "c3", "C30", "356", "?82", "d5", "D31", "457", "`83", "e6", "E32", "558", "~84", "f7", "F33", "659", ",85", "g8", "G34", "760", ":86", "h9", "H35", "861", ";87", "i10", "I36", "962", "[88", "j11", "J37", "063", "]89", "k12", "K38", ".64", "|90", "l13", "L39", "@65", "91", "m14", "M40", "$66", "n15", "N41", "!67", "o16", "O42", "*68", "p17", "P43", "&69", "q18", "Q44", "%70", "r19", "R45", "(71", "s20", "S46", ")72", "t21", "T47", "^73", "u22", "U48", "+74", "v23", "V49", "-75", "w24", "W50", "{76", "x25", "X51", "}77", "y26", "Y52", "<78", "z27", "Z53", ">79", " 0" };


char encoded[200];

const char* encode(const char* data){
    strcpy(encoded, "");
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



char decoded[200];

const char* decode(const char* data){
    strcpy(decoded, "");
    char temp[3];
    temp[0] = 0;
    char copy[strlen(data) + 1];
    strcpy(copy, data);
    copy[strlen(data)] = ' ';
    for(int i = 0; i < strlen(copy); i++){
        if(copy[i]==' '){
            for(int j = 0; j < (sizeof(a)/sizeof(char *)); j++){
                if(strcmp(temp, &(a[j][1]))==0){
                    strncat(decoded, &(a[j][0]), 1);
                    break;
                }
            }
            strcpy(temp, "");
        }else{
            strncat(temp, &(copy[i]), 1);
        }  
    }  
    return decoded;
}

int check(const char* data, const char* hash){
    int stat = strcmp(decode(hash), data) == 0 ? 0 : 1;
    return stat;
}