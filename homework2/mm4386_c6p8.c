#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> 

int main(void){
    int n; 
    int starting_day;
    int i;  
    int remainder_factor; 

    printf("Enter number of day in month: "); 
    scanf("%d", &n); 

    printf("Enter starting day of the week (1=Sun, 7=Sat): "); 
    scanf("%d", &starting_day); 

    switch(starting_day){
        case 1: 
            printf(" 1 "); 
            break; 
        case 2:
            printf("    1 "); 
            break; 
        case 3: 
            printf("       1 "); 
            break; 
        case 4: 
            printf("          1 "); 
            break; 
        case 5: 
            printf("             1 "); 
            break;
        case 6: 
            printf("                1 "); 
            break;
        case 7: 
            printf("                   1\n"); 
            break; 
    }

    for (i = 2; i < n + 1; i++){
        if (i < 10){
            printf(" %d ", i); 
        }
        else{
        printf("%d ", i); 
        }
        if ((i + starting_day - 1) % 7 == 0){
            printf("\n"); 
        }
    }
    printf("\n"); 
    return 0; 
}