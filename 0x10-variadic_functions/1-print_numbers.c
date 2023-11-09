#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @n: number of parameter
 * @separator: separator between two numbers
 * Return: Always 0
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list no;

	va_start(no, n);

	if (separator == NULL)
		separator = "";

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(no, int));
		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(no);
}
