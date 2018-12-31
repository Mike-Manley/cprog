#include "outfn.h"
#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 

int main(int argc, char **argv ){
    FILE* fr = NULL; 
    FILE* fw = NULL;
    char c; 
    char new_c; 
    char xor[] = ".xor"; 
    char* key = NULL; 
    char* outputfn = NULL; 

    /*Opens File for Reading */ 
    fr = fopen(argv[1], "rb");
    if (fr == NULL){
        printf("File not opened\n"); 
        exit(1); 
    }

    /*Opens File for Writing */ 
    outputfn = outfn(argv[1], xor); 
    fw = fopen(outputfn, "wb"); 
    if (fw == NULL){
        printf("File not opened\n"); 
        exit(1); 
    }

    /* Reads key from command line and writes encrypted test */ 
    key = argv[2]; 
    while(1){
       c = getc(fr); 
       if(c == EOF) 
            break; 
       new_c = c ^ *key;  
       putc(new_c, fw);  
    }

    /*Close open files */ 
    fclose(fr); 
    fclose(fw); 
    free(outputfn); 
}