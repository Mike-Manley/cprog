#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

char* duplicate(char str[]){
    int input_length; 
    char *ptr; 
    char *null_pointer = NULL; 
    input_length = strlen(str); 
    ptr = malloc(sizeof(char) * input_length); 
    if (ptr == NULL){
        printf("Failed Memory Allocation\n"); 
        return null_pointer; 
    }
    strcpy(ptr,str); 
    return ptr; 
}

/*
int main(void){
    char str[] = "Let's see how accurate this really is with memory allocation!!!!!!!!";
    char* p; 
    int test; 
    p = duplicate(str);     
    return 1; 
}
*/