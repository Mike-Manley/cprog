#include "strlib.h"
int my_strlen(char* string){
    int i; 
    for(i =0; *string != '\0'; i++){ 
        string++; 
    }
    return i; 
}

int my_strcmp(char* a, char* b){
    int i; 
    for(i=0; *a == *b; i++){
        if(*a == '\0' && *b == '\0')
            return 0; 
        a++; 
        b++; 
    }
    return 1;     
} 