#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int spot = 0;
	int e;

	while (*s != '\0')
	{
		spot++;
		s++;
	}
	s--;
	for (e = spot; e > 0; e--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
