#include <stdio.h> 

/*
int g(int a){
    return a * 2; 
}
*/ 

int sum(int (*f)(int), int start, int end){
    int i; 
    int finish; 
    int output;
    output = 0; 
    finish = end + 1; 
    for (i = start; i < finish; i++){
        output = output + f(i); 
    }
    return output; 
}

/*
int main(void){
    int i; 
    int j;
    i = 0; 
    j = 3; 
    sum(g, i, j); 
}
*/