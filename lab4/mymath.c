#include "mymath.h"
#include <limits.h> 

int i; 
unsigned long x;  
void compute_fibs (unsigned long* fibs, unsigned int* N){
    x = ULONG_MAX; 
    if (*N == 0){
        return; 
    }
    fibs[0] = 0; 
    if (*N > 1){
        fibs[1] = 1;
    } 
    for (i = 2; i < *N; i++){
        if(fibs[i - 2] > x - fibs[i - 1]){
            *N = i; 
            break;        
        }
        fibs[i] = fibs[i - 2] + fibs[i - 1];
    }
}