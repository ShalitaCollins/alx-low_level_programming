#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)

{

        int a;
       int p;

	for (a = '0'; a < '9'; a++)
	{
	 
	for (p = a + 1; p <= '9'; p++)
	{
	if (p != a)
	{
	putchar(a);
        putchar(p);
        if (a == '8' && p == '9')
	continue;
        putchar(',');
        putchar(' ');
        }
	}
	}
        putchar('\n');
        return (0);

}	
