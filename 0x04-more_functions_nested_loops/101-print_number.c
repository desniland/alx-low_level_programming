#include "main.h"
/**
 * print_number - prints an integer
 * @n: input integer parameter
*/
void print_number(int n)
{
int divisor = 1;
int is_negative = 0;

if (n < 0)
{
_putchar('-');
n = -n;
is_negative = 1;
}
while (n / divisor >= 10)
{
divisor *= 10;
while (divisor > 0)
{
int digit = n / divisor;
_putchar(digit + '0');
n %= divisor;
divisor /= 10;
}
if (n == 0 && !is_negative)
_putchar('0');
}
}
