#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#define HOUSE_WIDTH   69
#define HOUSE_HEIGHT  26
#define WINDOW_WIDTH  11
#define WINDOW_HEIGHT  3

int solved(int state[]){
    int i; 
    for (i = 0; i < 9; i++){
        if(state[i] == 1){
            return 0; 
        }
    }
    return 1; 
}

void invert(int choice, int* ptr){
    if(*ptr == 1){
        *ptr = 0; 
    }
    else{
        *ptr = 1; 
    }
}

void house_init (char house[], int state[]){
    int i, j; 
    char pixel[] = "#"; 
    char *p = pixel;
    char space[] = " "; 

    for (i = 0; i < 9; i++){
            if (state[i] == 1){
                p = &pixel[0]; 
            }
            else{
                p = &space[0]; 
            }

           switch(i){
               case 0:
                    for(j=WINDOW_WIDTH; j < WINDOW_WIDTH*2; j++){ 
                        house[HOUSE_WIDTH * 8 + j] = *p; 
                        house[HOUSE_WIDTH * 9 + j] = *p; 
                        house[HOUSE_WIDTH * 10 + j] = *p; 
                    }
                break; 
               case 1:

                    for(j=WINDOW_WIDTH + 18; j < (WINDOW_WIDTH * 2) + 18; j++){ 
                        house[HOUSE_WIDTH * 8 + j] = *p; 
                        house[HOUSE_WIDTH * 9 + j] = *p; 
                        house[HOUSE_WIDTH * 10 + j] = *p; 
                    }
                break; 
                case 2: 

                    for(j=WINDOW_WIDTH + 36; j < (WINDOW_WIDTH * 2) + 36; j++){ 
                        house[HOUSE_WIDTH * 8 + j] = *p; 
                        house[HOUSE_WIDTH * 9 + j] = *p; 
                        house[HOUSE_WIDTH * 10 + j] = *p; 
                    }
                break; 

                case 3: 
                    for(j=WINDOW_WIDTH; j < WINDOW_WIDTH*2; j++){
                        house[HOUSE_WIDTH * 14 + j] = *p; 
                        house[HOUSE_WIDTH * 15 + j] = *p; 
                        house[HOUSE_WIDTH * 16 + j] = *p; 
                    }
                break; 
                case 4:
                    for(j=WINDOW_WIDTH + 18; j < (WINDOW_WIDTH * 2) + 18; j++){ 
                        house[HOUSE_WIDTH * 14 + j] = *p; 
                        house[HOUSE_WIDTH * 15 + j] = *p; 
                        house[HOUSE_WIDTH * 16 + j] = *p; 
                    }
                break; 

                case 5: 

                    for(j=WINDOW_WIDTH + 36; j < (WINDOW_WIDTH * 2) + 36; j++){ 
                        house[HOUSE_WIDTH * 14 + j] = *p; 
                        house[HOUSE_WIDTH * 15 + j] = *p; 
                        house[HOUSE_WIDTH * 16 + j] = *p; 
                    }
                break; 

                case 6: 
                    for(j=WINDOW_WIDTH; j < WINDOW_WIDTH*2; j++){
                        house[HOUSE_WIDTH * 20 + j] = *p; 
                        house[HOUSE_WIDTH * 21 + j] = *p; 
                        house[HOUSE_WIDTH * 22 + j] = *p; 
                    }
                break; 
                case 7:
                    for(j=WINDOW_WIDTH + 18; j < (WINDOW_WIDTH * 2) + 18; j++){ 
                        house[HOUSE_WIDTH * 20 + j] = *p; 
                        house[HOUSE_WIDTH * 21 + j] = *p; 
                        house[HOUSE_WIDTH * 22 + j] = *p; 
                    }
                break; 

                case 8: 
                    for(j=WINDOW_WIDTH + 36; j < (WINDOW_WIDTH * 2) + 36; j++){ 
                        house[HOUSE_WIDTH * 20 + j] = *p; 
                        house[HOUSE_WIDTH * 21 + j] = *p; 
                        house[HOUSE_WIDTH * 22 + j] = *p; 
                    }
                break; 
           }
      }
}

void window_toggle (int state[], char house[], int choice){
   int *ptr = &state[choice]; 

    switch(choice){  
        case 0: 
        ptr = &state[0]; 
        invert(choice, ptr); 
        ptr = &state[1]; 
        invert(choice, ptr); 
        ptr = &state[3]; 
        invert(choice, ptr); 
        break; 
        case 1: 
        ptr = &state[0]; 
        invert(choice,ptr); 
        ptr = &state[1]; 
        invert(choice, ptr); 
        ptr = &state[2];
        invert(choice, ptr); 
        ptr = &state[4];
        invert(choice, ptr); 
        break; 
        case 2: 
        ptr = &state[1]; 
        invert(choice, ptr); 
        ptr++; 
        invert(choice, ptr); 
        ptr = &state[5]; 
        invert(choice, ptr); 
        break; 
        case 3: 
        ptr = &state[0]; 
        invert(choice, ptr); 
        ptr = &state[3]; 
        invert(choice, ptr); 
        ptr++; 
        invert(choice, ptr); 
        ptr = &state[6]; 
        invert(choice, ptr); 
        break; 
        case 4: 
        ptr = &state[1]; 
        invert(choice, ptr); 
        ptr = &state[3]; 
        invert(choice, ptr); 
        ptr++; 
        invert(choice, ptr); 
        ptr++; 
        invert(choice, ptr); 
        ptr = &state[7]; 
        invert(choice, ptr); 
        break;
        case 5: 
        ptr = &state[2]; 
        invert(choice, ptr); 
        ptr= & state[4]; 
        invert(choice, ptr); 
        ptr++; 
        invert(choice, ptr); 
        ptr = &state[8]; 
        invert(choice, ptr); 
        break;
        case 6: 
        ptr = &state[3]; 
        invert(choice, ptr); 
        ptr = &state[6]; 
        invert(choice, ptr); 
        ptr++; 
        invert(choice, ptr); 
        break;  
        case 7: 
        ptr = &state[4]; 
        invert(choice, ptr); 
        ptr = &state[6]; 
        invert(choice, ptr); 
        ptr++; 
        invert(choice, ptr); 
        ptr++; 
        invert(choice, ptr); 
        break; 
        case 8: 
        ptr = &state[5]; 
        invert(choice, ptr); 
        ptr = &state[7]; 
        invert(choice, ptr); 
        ptr++; 
        invert(choice, ptr); 
        break;
    }
    
   house_init(house, state); 
}


int get_input (int* val)
{
    do {
        if ( (*val = getchar()) == '\n')
            return 0;
    } while (getchar() != '\n');

    *val -= '0';

    if (*val >= 0 && *val <= 9)
        return 1;
    else
        return 0;
}


void house_display (char* house)
{
    int i, j;

    for (j=0; j<HOUSE_HEIGHT; j++, printf("\n"))
        for (i=0; i<HOUSE_WIDTH; i++)
            printf ("%c", house[HOUSE_WIDTH*j+i]);
}



int main (int argc, char** argv)
{
    int choice;

    char house[] =
    "                                             ______________          "
    "                                            |______________|         "
    "      _______________________________________|            |_____     "
    "     '                                       |____________|     `    "
    "    |                                                           |    "
    "    '-----------------------------------------------------------'    "
    "    |           1                 2                 3           |    "
    "    |     +-----------+     +-----------+     +-----------+     |    "
    "    |     |           |     |           |     |           |     |    "
    "    |     |           |     |           |     |           |     |    "
    "    |     |           |     |           |     |           |     |    "
    "    |     +-----------+     +-----------+     +-----------+     |    "
    "    |           4                 5                 6           |    "
    "    |     +-----------+     +-----------+     +-----------+     |    "
    "    |     |           |     |           |     |           |     |    "
    "    |     |           |     |           |     |           |     |    "
    "  _ |     |           |     |           |     |           |     |    "
    " |#||     +-----------+     +-----------+     +-----------+     |    "
    " |_||           7                 8                 9           |    "
    "  `-|     +-----------+     +-----------+     +-----------+     |    "
    "    -     |           |     |           |     |           |     |    "
    "    '     |           |     |           |     |           |     |    "
    "    '     |           |     |           |     |           |     |    "
    "   o'     +-----------+     +-----------+     +-----------+     |    "
    "    '                                                           |    "
    "____'___________________________________________________________'____";

    /* NOTE:
     * this will be our initial window state, do not change this!
     *   1 = Light is ON  -- fill with '#' character
     *   0 = Light is OFF -- fill with ' ' character (i.e. a space) */
    int state[] = { 1, 1, 0,
                    1, 1, 0,
                    1, 0, 0 };

    /* TODO: house[] needs to be updated to reflect initial
     *       values held in state[] */

    house_init (house, state);


    /* Infinite game loop.
     * (We will exit using 'break' when certain conditions are met) */
    while (1) {
        house_display (house);

        if (solved (state)) {
            printf ("Congratulations!  You won!\n");
            break;
        }

        printf ("Choose a Window (0 to exit): ");
        if (!get_input (&choice)) {
            printf ("INVALID SELECTION!\n");
            continue;
        }

        if (!choice)
            break;

        choice--;
        window_toggle (state, house, choice);

    }

    printf ("Goodbye!\n");

    return 0;
}