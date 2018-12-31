#include <stdio.h> 
#include <limits.h> 
#include <stdlib.h> 

int *find_largest(int a[], int n); 


int main(void){
    int input[] = {1,5, 2, 3, 4}; 
    int input_length;
    int *p; 
    input_length = sizeof(input) / 4; 
    p = find_largest(input, input_length); 
    printf("%d\n", *p); 
    return 0; 
}


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

