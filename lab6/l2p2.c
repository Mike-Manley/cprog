#include <stdio.h> 
#include <stdlib.h> 

struct list{
    unsigned int x; 
    unsigned int y; 
    struct list* next;
}; 


unsigned int list_count (struct list* head){
    struct list* item = head; 
    int n = 0; 
    while(item->next){
        n++; 
        item = item->next; 
    }
    return n; 
}

struct list* list_pop_head (struct list* head){
    struct list* item; 
    item = head -> next; 
    if(item != NULL){
        head->next = item->next; 
        item->next = NULL; 
    }
    return item; 
}

void list_add_to_head (struct list* head, struct list* new_item){
    int i;
    while(head-> next != NULL){
        head = head -> next; 
    }
    head -> next = new_item; 
    head = new_item; 
    head -> next = NULL; 
}

void list_init (struct list* head){
    head->next = NULL; 
}

int main(int argc, char** argv){
    struct list *head, *foo; 
    int i; 
    head = malloc(sizeof(struct list) * 10); 
    list_init(head); 
    //Adds to bottom of the list
    for(i = 5; i <= 500; i *= 10){
            foo = malloc(sizeof(*foo)); 
            foo->x = i; 
            foo->y = 2 * i; 
            list_add_to_head(head, foo); 
    }
    // Removes from the top
    list_pop_head(head);  
    printf("List contains %u items\n---\n", list_count(head)); 
    for(i=0, foo=head->next; foo != NULL; foo = foo->next ){
        printf("Foo %u:\n", i++); 
        printf("  x = %u:\n", foo->x); 
        printf("  y = %u:\n", foo->y); 
    }
    return 1; 
}