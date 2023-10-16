#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: char to check
 * Return: 0 is success
*/
void puts_half(char *str)
{
int string = 0, x;

while (str[string] != '\0')
string++;
if (string + 1 % 2 != '0')
x = (string - 1) / 2;
else
x = (string / 2);
x++;
for (string = x; str[string] != '\0'; string++)
_putchar(str[string]);
_putchar('\n');
}
