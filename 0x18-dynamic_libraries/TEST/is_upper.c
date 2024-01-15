#include "main.h"
#include <ctype.h>

/**
 * _isupper - check for uppercase letter
 * @c: integer
 * Return: 0
*/

int _isupper(int c)
{
	int a = 0;

	if (c >= 65 && c <= 90)
		a = 1;
	return (a);
}
