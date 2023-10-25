#include <unistd.h>
#include "main.h"
/*
 * _putchar - prints c to the std output
 *
 * Return: Always 0
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
