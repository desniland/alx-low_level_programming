#include "variadic_functions.h"

/**
 * print_strings - Prints strings passed to the function separed by separators
 * @separator: A string that is used to separate strings
 * @n: number of unnamed parameters
 * Return: Always 0
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int x;
	va_list no;

	va_start(no, n);
	if (separator == NULL)
		separator = "";

	for (x = 0; x < n; x++)
	{
		str = va_arg(no, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(no);
}
