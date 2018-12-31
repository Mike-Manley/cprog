#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> 
//int atoi(const char *str); 

int main (int argc, char** argv) {
int factor; float result;
if (argc == 2) {
factor = atoi(argv[1]);
} else {
printf ("Usage: %s some_integer\n", argv[0]); return 1;
}
    result = cos(factor*M_PI);
printf ("The cosine of Pi is %f\n", result);
return 0; }