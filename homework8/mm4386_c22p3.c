#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 

int main(int argc, char **argv ){
    int i; 
    char c; 
    FILE* fp; 
  
    for (i=1; i < argc; i++){
        fp = fopen(argv[i], "r"); 

        if(fp == NULL){
            fprintf(stdout, "FILE NOT FOUND\n"); 
            exit(1); 
        }
        while ((c = fgetc(fp)) != EOF)
            fprintf(stdout,"%c", c);    
        fclose(fp); 
    }
    
    return 0; 
}