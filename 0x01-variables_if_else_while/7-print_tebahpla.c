#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)

{
	
    char me = 'z';
    while (me >= 'a') {
        putchar(me); 
        me--;
    }
    
    putchar('\n');
    
    return 0;
}

