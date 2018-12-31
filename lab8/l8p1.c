#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 

int main(void){
    FILE* fp; 
    int i; 
    int sum; 
    unsigned int length; 
    unsigned long* elements; 
    sum = 0; 
    fp = fopen("/opt/c201/lab08/array.dat", "rb"); 

    if(fp == NULL){
        printf("File error\n"); 
        exit(1); 
    }

    fread(&length, sizeof(unsigned int), 1, fp); 
    elements = malloc(length * sizeof(unsigned int)); 

    for(i=0; i<length; i++){
        fread(&elements[i], sizeof(unsigned int), 1, fp); 
        sum = sum + elements[i]; 
    }

    printf("["); 
    for(i = 1; i < length; i++){
        printf("%lu ", elements[i]);
        if(i % 15 == 0){
            printf("\n"); 
        }
    }
    printf("]\n"); 
    printf("Your sum is %i\n", sum);


    fclose(fp); 
    return 0; 
}