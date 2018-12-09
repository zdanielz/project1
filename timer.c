#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int sec = 0, min = 0, hour = 0;
    while(1)
    {
        sec++;
        if (sec == 60)
        {min++;sec=0;}
        if (min == 60)
        {hour++;min=0;}
        printf("%2i:%2i:%2i\a", hour , min , sec );
        sleep(1);
        system("clear");
    }
}

