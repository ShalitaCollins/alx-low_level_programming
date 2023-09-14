#include "main.h"

/**
 * _isupper - check if a letter is upper
 * @y: the num to be checked
 * return: 1 for upper letter or 0 for any else
 */

int _isupper(int y)

{

	if (y >= 65 && y <= 90)
	{
		return (1);
	}
	return (0);
}
