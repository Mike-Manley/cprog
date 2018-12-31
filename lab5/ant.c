#include "ant.h"
#include <stdio.h> 

void init_ant (struct ant* a, int position){
    (*a).position = position; 
    (*a).direction = 1; 
}

void ant_turn (struct ant* a){
    if(((*a).direction) == 1) 
        (*a).direction = 0; 
    else 
        (*a).direction = 1; 
}

void ant_move (struct ant* a, unsigned int distance){
    if((*a).direction == 1)
        (*a).position = (*a).position + distance;
    else 
        (*a).position = (*a).position - distance; 
}

int ant_get_position (struct ant* a){
    return (*a).position; 
}
char* ant_get_direction (struct ant* a){
    if((*a).direction == 1)
        return "right"; 
    else    
        return "left"; 
}