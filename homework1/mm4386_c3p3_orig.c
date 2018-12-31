#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> 

int main (void){
    char isbn[100]; 
    int index_count = 0; 
    int comp_value = 0; 
    char temp_string[1]; 
    char gs1_prefix[10] = " "; 
    char group_identifier[10] = " "; 
    char publisher_code[10] = " ";  
    char item_number[10] = " "; 
    char check_digit[10] = " ";
    int i;
    int index[4]; 
    int index_end; 

    printf("Enter ISBN:"); 
    scanf("%s", isbn); 
    gs1_prefix[0] = " "; 
    group_identifier[0] = " "; 
    publisher_code[0] = " ";  
    item_number[0] = " "; 
    check_digit[0] = " "; 


    index_end = strlen(isbn); 

    for (i = 0; i < index_end; i = i + 1){
        temp_string[0] = isbn[i]; 
        if (strcmp(temp_string, "-") == 0){
            index[index_count] = i; 
            index_count = index_count + 1; 
        }
    }

   for (i = 0; i < index[0]; i = i + 1){
       temp_string[0] = isbn[i]; 
       strcat(gs1_prefix, temp_string); 
   }

      for (i = index[0] + 1; i < index[1]; i = i + 1){
       temp_string[0] = isbn[i]; 
       strcat(group_identifier, temp_string); 
   }

      for (i = index[1] + 1; i < index[2]; i = i + 1){
       temp_string[0] = isbn[i]; 
       strcat(publisher_code, temp_string); 
   }

      for (i = index[2] + 1; i < index[3]; i = i + 1){
       temp_string[0] = isbn[i]; 
       strcat(item_number, temp_string); 
   }

      for (i = index[3] + 1; i < index_end; i = i + 1){
       temp_string[0] = isbn[i]; 
       strcat(check_digit, temp_string); 
   }


    printf("GS1 prefix:%s\n", gs1_prefix); 
    printf("Group identifier:%s\n", group_identifier); 
    printf("Publisher code:%s\n", publisher_code); 
    printf("Item number:%s\n", item_number); 
    printf("Check digit:%s\n", check_digit); 
    return 0;  
}