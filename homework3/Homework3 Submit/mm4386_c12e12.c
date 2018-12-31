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

