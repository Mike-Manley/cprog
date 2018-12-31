#include <limits.h> 
#include <stdio.h> 
#include <stdlib.h> 

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
            printf("ERROR\n"); 
            exit(-1);        
        }
        fibs[i] = fibs[i - 2] + fibs[i - 1];
    }
}

int main (int argc, char** argv)
{
unsigned int i;
unsigned int elements; 
unsigned long* fibs;

if (argc != 2){
    printf("Usage: %s <# of elements>\n", argv[0]);
}
else{
elements = atoi(argv[1]); 
fibs = malloc(elements * sizeof(unsigned int)); 
compute_fibs (fibs, &elements);


for (i=0; i<elements; i++) {
printf ("fibs[%i]: %lu\n", i, fibs[i]);
}
printf ("Displaying %u fibs\n", elements);
free(fibs); 
}
}