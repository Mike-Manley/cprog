#include<stdlib.h>
#include<stdio.h> 

struct point {int x, y;}; 
struct rectangle{struct point upper_left, lower_right;};
struct rectangle *p; 

int main(void){
    struct rectangle output; 
    struct point upper_left; 
    struct point lower_right; 
    upper_left.x = 10; 
    upper_left. y = 25; 
    lower_right.x = 20; 
    lower_right.y = 15; 
    output.upper_left = upper_left; 
    output.lower_right = lower_right; 
    p = malloc(sizeof(struct rectangle)); 
    p = &output; 
    printf("p points to upper left x value of %i and y value of %i\n", p->upper_left.x, p->upper_left.y); 
    printf("p points to lower right x value of %i and y value of %i\n", p->lower_right.x, p->lower_right.y); 
    return 1; 
}