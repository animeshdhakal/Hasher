#pragma once
#include <stdlib.h>
#include <string.h>

const char* a[] = { "a92", "A38", "135", "\\59", "b71", "B32", "276", "/56", "c47", "C68", "32", "?36", "d20", "D3", "428", "`33", "e8", "E16", "596", "~62", "f23", "F26", "618", ",86", "g49", "G66", "789", ":70", "h14", "H80", "864", ";83", "i60", "I84", "930", "[95", "j77", "J43", "040", "]17", "k15", "K7", ".88", "|63", "l27", "L53", "@91", "\n78", "m50", "M73", "$21", "n57", "N85", "!41", "o48", "O74", "*6", "p51", "P99", "&93", "q79", "Q98", "%25", "r9", "R29", "(55", "s54", "S39", ")4", "t81", "T19", "^31", "u45", "U12", "+22", "v42", "V13", "-82", "w52", "W61", "{87", "x11", "X69", "}1", "y44", "Y37", "<97", "z34", "Z58", ">65", " 0"};
// char encoded[200];

void encode(const char* data, char* buffer){
    strcpy(buffer, "");
    for(int i =0; i<strlen(data); i++){
        for(int j = 0; j < (sizeof(a)/sizeof(char *)); j++){
            if(data[i]==a[j][0]){
                strcat(buffer, &(a[j][1]));
                strcat(buffer, " ");
                break;
            }
        }
       
    }
}



void decode(const char* data, char* buffer){
    strcpy(buffer, "");
    char temp[3];
    temp[0] = 0;
    char copy[strlen(data) + 1];
    strcpy(copy, data);
    copy[strlen(data)] = ' ';
    for(int i = 0; i < strlen(copy); i++){
        if(copy[i]==' '){
            for(int j = 0; j < (sizeof(a)/sizeof(char *)); j++){
                if(strcmp(temp, &(a[j][1]))==0){
                    strncat(buffer, &(a[j][0]), 1);
                    break;
                }
            }
            strcpy(temp, "");
        }else{
            strncat(temp, &(copy[i]), 1);
        }  
    }  
}

int check(const char* data, const char* hash){
    char buffer[strlen(data)];
    decode(hash, buffer);
    int stat = strcmp(buffer, data) == 0 ? 0 : 1;
    return stat;
}