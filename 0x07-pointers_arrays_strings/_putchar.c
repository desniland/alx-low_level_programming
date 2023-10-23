#include "main.h"
#include <unistd.h>
/*
 * _putchar - outputs the character c to std output
 *
 * Return: Always 0
 */
int _putchar(char c)
{
	return(write(1 , &c, 1));
}
