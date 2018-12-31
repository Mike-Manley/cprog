#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> 

int is_prime(int n); 

int main(void){
    int n; 
    int prime_count = 0; 
    printf("2 is prime\n"); 
    for (n = 2; prime_count < 24; n++){
        if (is_prime(n)){
            prime_count = prime_count + 1; 
            printf("%d is prime\n", n); 
        } 
    }
    return 0; 
}

int is_prime (int n){
    int d; 
    for (d = 2; d < sqrt(n) + 1; d++){
        if (!(n % d)) 
            return 0; 
    }
    return 1; 
}





