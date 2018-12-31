#include <stdio.h> 
#include <string.h> 
/*
void new_cmd(void){
    printf("new_cmd\n"); 
}

void open_cmd(void){
    printf("open_cmd\n"); 
}

void close_cmd(void){
    printf("close_cmd\n"); 
}

void close_all_cmd(void){
    printf("close_cmd\n"); 
}

void save_cmd(void){
    printf("close_cmd\n"); 
}

void save_as_cmd(void){
    printf("close_cmd\n"); 
}

void save_all_cmd(void){
    printf("close_cmd\n"); 
}

void print_cmd(void){
    printf("close_cmd\n"); 
}

void exit_cmd(void){
    printf("close_cmd\n"); 
}
*/ 


struct {
    char *cmd_name; 
    void (*cmd_pointer)(void); 
}file_cmd[] = 
{{"new", new_cmd}, 
{"open", open_cmd}, 
{"close", close_cmd}, 
{"close all", close_all_cmd}, 
{"save", save_cmd}, 
{"save as", save_as_cmd}, 
{"save all", save_all_cmd}, 
{"print", print_cmd}, 
{"exit", exit_cmd}
}; 

void call (char *cmd_name){
    int i; 
 	for (i = 0; i <= 8; ++i) {
		if (strcmp(cmd_name, file_cmd[i].cmd_name) == 0) {
			file_cmd[i].cmd_pointer();
			break;
		} 
	}
}

/*
int main (void)
{
	char *cmd = "close";
	call(cmd);
	return 0;
}
*/ 
