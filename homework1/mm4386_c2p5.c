#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> 

int main (int argc, char** argv){
int x; int y;
x = atoi(argv[1]);
y = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;
printf ("The value of y is %d\n", y);
return 0;
}