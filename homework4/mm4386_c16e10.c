#include <stdio.h>

struct point {int x, y; }; 
struct rectangle {struct point upper_left, lower_right;}; 

int area(struct rectangle r){
    int height; 
    int width; 
    int output; 
    height = r.upper_left.y - r.lower_right.y; 
    width = r.lower_right.x - r.upper_left.x; 
    output = height * width; 
    return(output); 
}

struct point center(struct rectangle r){
    struct point output; 
    output.y = (r.upper_left.y + r.lower_right.y) / 2; 
    output.x = (r.upper_left.x + r.lower_right.x) / 2; 
    return output; 
}

struct rectangle move(struct rectangle r, int x, int y){
    r.upper_left.x = r.upper_left.x + x; 
    r.lower_right.x = r.lower_right.x + x; 
    r.upper_left.y = r.upper_left.y + y; 
    r.lower_right.y = r.lower_right.y + y; 
    return r; 
}

int inside(struct rectangle r, struct point p){
    if(r.upper_left.x < p.x && 
    r.lower_right.x > p.x &&
    r.upper_left.y > p.y &&
    r.lower_right.y < p.y){
        return 1; 
    }
    else{
        return 0; 
    }
}

/*
int main(void){
    struct rectangle r; 
    struct point upper_left; 
    struct point lower_right; 
    struct point p; 
    int x = -2; 
    int y = -2; 
    upper_left.x = -2; 
    upper_left.y = 2; 
    lower_right.x = 2; 
    lower_right.y = 0; 
    r.upper_left = upper_left; 
    r.lower_right = lower_right; 
    area(r); 
    printf("\n"); 
    center(r); 
    printf("\n"); 
    move(r, x, y); 
    printf("\n"); 
    p.x = 1; 
    p.y = 1; 
    inside(r, p); 
    printf("\n"); 
}
*/ 