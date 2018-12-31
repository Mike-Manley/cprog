#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> 

int main(void){
    int num; 
    int denom; 
    int temp_num; 
    int temp_denom; 
    int remain; 
    int factor; 
    int i; 
    printf("Enter a fraction: "); 
    scanf("%d/%d", &num, &denom); 

    remain = num % denom; 
    temp_num = num; 
    temp_denom = denom; 

    while (remain != 0){
        temp_num = temp_denom; ; 
        temp_denom = remain; 
        remain = temp_num % temp_denom; 
    }
    
    factor = temp_denom; 
    num = num / factor; 
    denom = denom / factor; 
    printf("In lowest terms: %d/%d\n",num,denom); 
    return 0;
}