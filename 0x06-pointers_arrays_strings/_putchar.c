#include <unistd.h>
/*
 * _putchar - output function
 *
 * Return: Always 0
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
