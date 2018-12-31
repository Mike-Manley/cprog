#include <stdio.h> 

void store_zeros(int a[], int n){
    int i; 
    int *ptr; 
    ptr = a; 
    for (i = 0; i < n; i++){
        *ptr = 0; 
        ptr++; 
    }
}



