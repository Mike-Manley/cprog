#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> 

int main (void){
    int area_code; 
    int first_half; 
    int second_half; 

    printf("Enter phone number [(xxx) xxx-xxxx]:"); 
    scanf("(%d) %d-%d", &area_code, &first_half, &second_half);
    printf("You entered %d.%d.%d\n\n", area_code, first_half, second_half);
    return 0; 
}