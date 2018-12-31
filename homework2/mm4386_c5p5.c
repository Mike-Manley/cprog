#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> 

int main(void){
    float income; 
    float tax_due; 
    printf("Enter your taxable income: "); 
    scanf("%f", &income); 
    if (income <= 750){
        tax_due = .01 * income; 
        printf("Tax due: %f\n", tax_due); 
    }
    else if(income <= 2250){
        tax_due = 7.50 + .02 * (income - 750); 
    }
    else if(income <= 3750){
        tax_due = 37.50 + .03 * (income - 2250); 
    }
    else if(income <= 5250){
        tax_due = 82.50 + .04 * (income - 3750); 
    }
    else if(income <= 7000){
        tax_due = 142.50 + .05 * (income - 5250); 
    }
    else{
        tax_due = 230 + .06 * (income - 7000); 
    }
    printf("Tax due: $%.2f\n", tax_due); 
    return 0; 
}