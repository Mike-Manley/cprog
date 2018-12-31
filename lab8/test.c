#include <stdio.h> 
#include <string.h> 

#define MAX_LINE_SIZE 1000

int main(void){
    char buffer[MAX_LINE_SIZE]; 
    char c; 
    int i;
    FILE* fp; 
    fp = fopen("/opt/c201/lab08/array.dat", "rb"); 

    while ( (c = fgetc(fp)) != EOF)
        printf("%c", c); 

    fclose(fp);  



    return 1; 
}
