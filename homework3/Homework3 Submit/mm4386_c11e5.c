#include <stdio.h> 

void split_time(long total_sec, int *hr, int *min, int *sec){
    int rem_seconds;
    while (total_sec >= 86400){
        total_sec = total_sec - 86400; 
    }
    *hr = total_sec / 3600;
    rem_seconds = total_sec % 3600; 
    *min = rem_seconds / 60; 
    *sec = rem_seconds % 60; 
}
