#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 

int main(int argc, char **argv ){
    int i; 
    int z; 
    int length; 
    int offset_length; 
    char c; 
    int offset; 
    int space_length; 
    FILE* fp; 
    length = 0; 
    fp = fopen(argv[1], "rb"); 

    if(fp == NULL){
        fprintf(stdout, "FILE NOT FOUND\n"); 
        exit(1); 
    }

    printf("Offset             Bytes               Characters\n"); 
    printf("------  -----------------------------  ----------\n"); 

    offset = 0; 
    while ((c = fgetc(fp)) != EOF){
        length = length + 1; 
    }
    offset_length = (length / 10) * 10 + 10; 
    space_length = (offset_length - length) * 3; 
    rewind(fp); 

    while(offset < offset_length){
        fseek(fp, offset, SEEK_SET); 

        if(offset < 10){
            fprintf(stdout, "     %i  ", offset); 
        }
        else if(offset < 100){
            fprintf(stdout, "    %i  ", offset);
        }
        else{
            fprintf(stdout, "   %i  ", offset);
        }

        for(i = offset; i < offset + 10; i++){
            if(i >= length){
                for(z=0;z < space_length; z++){
                    printf(" ");
                }
                break;
            }
            c = fgetc(fp); 
            fprintf(stdout, "%02x ", c);    
        }
        fprintf(stdout," ");
        fseek(fp, offset, SEEK_SET); 
        for (i = offset; i < offset + 10;i++){
            if(i >= length){
                break; 
            }
            c = fgetc(fp); 
            if (isprint(c))
                fprintf(stdout, "%c", c); 
            else 
                printf("."); 
        }
        printf("\n"); 
        offset = offset + 10; 
    }
    fclose(fp); 
    return 0; 
}