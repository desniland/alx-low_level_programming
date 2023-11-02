#include "main.h"
#include <unistd.h>
/*
 * _putchar - prints character to std output
 *
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
