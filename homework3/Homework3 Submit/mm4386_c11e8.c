#include <stdio.h> 
#include <limits.h> 
#include <stdlib.h> 

int *find_largest(int a[], int n){
    int i; 
    int *output = malloc(sizeof *output); 
    int largest_value = INT_MIN; 
    for (i = 0; i < n; i++){
        if (a[i] > largest_value){
            largest_value = a[i]; 
        }
    }
    *output = largest_value; 
    return output; 
}

