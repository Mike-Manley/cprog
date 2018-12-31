#include <stdio.h> 
#include <stdlib.h> 
#include <limits.h> 

void find_two_largest(const int *a, int n, int *largest, int *second_largest){
    int i; 
    int highest = INT_MIN; 
    int second_highest = INT_MIN;
    for (i = 0; i < n; i++){ 
        if(*a > highest){
            second_highest = highest; 
            highest = *a; 
        }
        else if(*a > second_highest){
            second_highest =  *a; 
        }
        a++; 
    }
    *largest = highest; 
    *second_largest = second_highest; 
}

int main(void){
    int input[] = {10, 900, 4, 3 ,500}; 
    int input_length; 
    const int *ptr; 
    int *largest = malloc(sizeof *largest); 
    int *second_largest = malloc(sizeof *second_largest); 
    ptr = input;
    input_length = sizeof(input) / 4; 
    find_two_largest(ptr, input_length, largest, second_largest); 
    if (input_length > 0){
        printf("The largest value is %i\n", *largest); 
    }
    else{
        printf("The array is empty\n"); 
    }
    if (input_length > 1){
    printf("The second largest value is %i\n", *second_largest); 
    }
    return 0; 
}