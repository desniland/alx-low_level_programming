#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @x: The number from which to extract the last digit
 * Return: The last digit of 'x'
*/
int print_last_digit(int x)
{
int y = x % 10;

if (y < 0)
y = -y;
_putchar(y + '0');
return y;
}
