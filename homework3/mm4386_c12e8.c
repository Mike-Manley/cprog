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

int main(void){
    int i; 
    int input[15]; 
    int input_length; 
    input_length = sizeof(input) / 4; 
    store_zeros(input, input_length); 

    for (i = 0; i < input_length; i++){
        printf("%i\n", input[i]); 
    }

    return 0; 
}


