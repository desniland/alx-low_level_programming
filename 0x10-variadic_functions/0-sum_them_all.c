#include "variadic_functions.h"
/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
 * Return: The sum of all the numbers
*/
int sum_them_all(const unsigned int n, ...)
{
int Sum = 0;
unsigned int x;
va_list args;

va_start(args, n);

if (n == 0)
return (0);

for (x = 0; x < n; x++)
Sum += va_arg(args, int);

va_end(args);

return (Sum);
}
