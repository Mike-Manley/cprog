#include <stdio.h>

void swap(int *p, int *q); 

int main(void){
    int i = 5; 
    int j = 10; 
    swap(&i, &j); 
    printf("Variable i was 5 and now is %d\n", i); 
    printf("Variable j was 10 and now is %d\n", j); 
    return 0; 
}

void swap(int *p, int *q){
    int temp_p = *p; 
    int temp_q = *q; 
    *p = temp_q; 
    *q = temp_p; 
}