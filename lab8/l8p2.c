#include <stdio.h> 
#include <string.h> 

#define MAX_LINE_SIZE 1000

int main(void){
    char buffer[MAX_LINE_SIZE]; 
    char c; 
    int i;
    FILE* fp; 
    FILE* count; 
    i = 1;
    count = fopen("./count.txt", "w+");
    fp = fopen("/opt/c201/lab08/lorum.txt", "r"); 

    if(fp == NULL || count == NULL){
        printf("File error\n"); 
        exit(1); 
    }

    while (fgets(buffer, MAX_LINE_SIZE, fp) != NULL){
        fprintf(count, "%i: %lu\n", i, strlen(buffer) - 1); 
        i++; 
    }

    fclose(fp); 
    fclose(count); 
    count = fopen("./count.txt", "r");

    if(count == NULL){
        printf("File error\n"); 
        exit(1); 
    }

    while ( (c = fgetc(count)) != EOF)
        printf("%c", c); 

    fclose(count); 
    return 1; 
}
