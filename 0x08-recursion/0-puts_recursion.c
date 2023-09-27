#include "main.h"

/**
 * _puts_recursion - Prints a string using a for loop
 * @s: The input string
 */
void _puts_recursion(char *s)
{
    for (; *s; s++)
    {
        _putchar(*s);
    }
    _putchar('\n');
}
