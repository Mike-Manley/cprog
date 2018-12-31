#include <stdio.h>

void swap(int *p, int *q){
    int temp_p = *p; 
    int temp_q = *q; 
    *p = temp_q; 
    *q = temp_p; 
}