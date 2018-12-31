#include "dict.h"
#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#define MAX_LINE_SIZE 1000

int main(int argc, char **argv ){
    FILE* fr; 
    void* user_data; 
    struct dict count; 
    char* key; 
    int len; 
    unsigned int bins = 10; 
    int temp_int; 
    char buffer[MAX_LINE_SIZE]; 
    int i;
    int data[MAX_LINE_SIZE]; 

    fr = fopen(argv[1], "r");
    if (fr == NULL){
        printf("File not opened\n"); 
        exit(1); 
    }

    for(i = 0; i < MAX_LINE_SIZE; i++){
        data[i] = i; 
    }

/* Makes Dictionary */ 
    dict_init(&count, bins, NULL); 
    while (fgets(buffer, MAX_LINE_SIZE, fr) != NULL){ 
        user_data = dict_peek(&count,buffer);  
        if(user_data == NULL){
            dict_insert(&count, buffer, &data[1]); 
        }
        else{
            temp_int = *(int*)user_data + 1;
            dict_pop(&count, buffer); 
             dict_insert(&count, buffer, &data[temp_int]); 
         }
    }
   
/* Reads File again and writes number of occurences */ 
    rewind(fr); 
    while (fgets(buffer, MAX_LINE_SIZE, fr) != NULL){ 
        fgets(buffer, MAX_LINE_SIZE, fr);
        user_data = dict_peek(&count,buffer);  
        if(user_data != NULL){
            dict_pop(&count,buffer); 
            len = strlen(buffer); 
            buffer[len-1] = ' '; 
            printf("%s", buffer); 
            printf("%i\n",*( (int*) user_data));
        }  
    }
    fclose(fr); 
}


