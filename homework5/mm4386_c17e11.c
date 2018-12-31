#include <stdio.h> 
#include <stdlib.h> 

struct node{
    int value; 
    struct node * next;
}; 

int count_occurrences(struct node *list, int n){
    int count; 
    for(count = 0; list->next != NULL; list = list->next){
        if (list->value == n)
            count++; 
    }
    return count; 
}

/* Node Pracitce 
int main(void){
    int test_int; 
    struct node *first = NULL; 
    struct node *new_node; 
    struct list *head; 
    new_node = malloc(sizeof(struct node)); 
    if (new_node == NULL){
        printf("Error: malloc failed.\n"); 
        exit(EXIT_FAILURE); 
    }
    new_node -> value = 10; 
    new_node -> next = first; 
    first = new_node; 
    new_node -> value = 10; 
    new_node -> next = first; 
    first = new_node; 
    test_int = count_occurrences( first, 10); 
    printf("%i\n", test_int); 
    return 1; 
}
*/ 