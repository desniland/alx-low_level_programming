#include "main.h"

/**
 * _strlen - count the length of a string
 * @s: string
 *
 * Return: the value of the length x
*/

int _strlen(char *s)
{
	int x = 0;

	while (s[x])
		x++;

	return (x);
}
