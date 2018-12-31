#include <stdio.h>

struct fraction {
int numerator;
int denominator;
};

struct fraction reduce (struct fraction f){
    int temp_numerator; 
    int temp_denominator; 
    int remain; 
    int factor; 
    int i; 
    struct fraction output; 
    int numerator; 
    int denominator; 
    numerator = f.numerator; 
    denominator = f.denominator; 

    remain = numerator % denominator; 
    temp_numerator = numerator; 
    temp_denominator = denominator; 

    while (remain != 0){
        temp_numerator = temp_denominator; ; 
        temp_denominator = remain; 
        remain = temp_numerator % temp_denominator; 
    }
    
    factor = temp_denominator; 
    numerator = numerator / factor; 
    denominator = denominator / factor; 
    output.numerator = numerator; 
    output.denominator = denominator; 
 /*   printf("%i\n", output.numerator); 
    printf("%i\n", output.denominator); */
    return output; 
}

struct fraction add (struct fraction f1, struct fraction f2){
  int output_numerator; 
  struct fraction output; 
  output.denominator = f1.denominator * f2.denominator; 
  f1.numerator = f1.numerator * f2.denominator; 
  f2.numerator = f2.numerator * f1.denominator; 
  output.numerator = f1.numerator + f2.numerator; 
  output = reduce(output); 
  return output; 
}

struct fraction sub (struct fraction f1, struct fraction f2){
  int output_numerator; 
  struct fraction output; 
  output.denominator = f1.denominator * f2.denominator; 
  f1.numerator = f1.numerator * f2.denominator; 
  f2.numerator = f2.numerator * f1.denominator; 
  output.numerator = f1.numerator - f2.numerator; 
  output = reduce(output); 
  return output; 
}

struct fraction mul (struct fraction f1, struct fraction f2){
struct fraction output; 
  output.numerator = f1.numerator * f2.numerator; 
  output.denominator = f1.denominator * f2.denominator; 
  output = reduce(output); 
  return output; 
}

struct fraction div (struct fraction f1, struct fraction f2){
struct fraction output; 
  output.numerator = f1.numerator * f2.denominator; 
  output.denominator = f1.denominator * f2.numerator; 
  output = reduce(output); 
  return output; 
}

/*
int main(void){
    struct fraction f; 
    f.numerator = 8; 
    f.denominator = 64; 
    struct fraction f1; 
    f1.numerator = 4; 
    f1.denominator = 5; 
    struct fraction f2; 
    f2.numerator = 6; 
    f2.denominator = 3; 
    reduce(f); 
    printf("\n"); 
    add(f1,f2); 
    printf("\n"); 
    sub(f1,f2); 
    printf("\n"); 
    mul(f1, f2); 
    printf("\n"); 
    div(f1, f2); 
}
*/ 