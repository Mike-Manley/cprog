#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> 

int main(void){
    int number; 
    printf("Enter a number: "); 
    scanf("%d", &number); 
    if (number > -10 && number < 10){
        printf("The number %d has one digit\n", number); 
    }
    else if (number > -100 && number < 100){
        printf("The number %d has two digits\n", number);
    }
    else if (number > -1000 && number < 1000){
        printf("The number %d has three digits\n", number);
    }
    else if (number > -10000 && number < 10000){
        printf("The number %d has fourc digits\n", number);
    }
    return 0; 
}