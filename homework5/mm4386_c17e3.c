#include <stdlib.h> 
#include <stdio.h> 

int *create_array(int n, int initial_value){
    int *new_array; 
    int i; 
    new_array = malloc(sizeof(int) * n); 
    if (new_array == NULL){
        printf("Memory allocation error\n"); 
        return NULL; 
    }
    for (i = 0; i <= n; i++){
        new_array[i] = initial_value; 
    }
    return new_array; 
}
/*
int main(void){
    int n; 
    int i; 
    int initial_value; 
    int *output_array; 
    n = 6; 
    output_array = malloc(sizeof(int) * n); 
    initial_value = 7; 
    output_array = create_array(n, initial_value);
    printf("BOTTOMPRINT\n\n"); 
    for (i = 0; i <= n; i++){
        printf("%i\n", output_array[1]); 
    }
    return 1; 
}
*/
