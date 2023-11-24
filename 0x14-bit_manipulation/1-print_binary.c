#include "main.h"
/**
* _power - calculates base and power
* @base: base of the exponet
* @pow: power of the exponet
* Return: value of base and power
*/
unsigned long int _power(unsigned int base, unsigned int pow)
{
unsigned long int n;
unsigned int x;

n = 1;
for (x = 1; x <= pow; x++)
n *= base;
return (n);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 * Return: void
*/
void print_binary(unsigned long int n)
{
	unsigned long int d, result;
	char flag;

	flag = 0;
	d = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (d != 0)
	{
		result = n & d;
		if (result == d)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || d == 1)
		{
			_putchar('0');
		}
		d >>= 1;
	}
}
