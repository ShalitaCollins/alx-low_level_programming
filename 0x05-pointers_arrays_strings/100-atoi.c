
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int q, w, n, len, f, digit;

	q = 0;
	w = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (q < len && f == 0)
	{
		if (s[q] == '-')
			++w;

		if (s[q] >= '0' && s[q] <= '9')
		{
			digit = s[q] - '0';
			if (w % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[q + 1] < '0' || s[q + 1] > '9')
				break;
			f = 0;
		}
		q++;
	}

	if (f == 0)
		return (0);

	return (n);
}
