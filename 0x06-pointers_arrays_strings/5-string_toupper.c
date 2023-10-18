#include "main.h"
/**
 * string_toupper - changes lowercase to uppercase
 * @s:string
 * Return:char
 */
char *string_toupper(char *s)
{
int x;
x = 0;
while (*(s + x))
{
if (*(s + x) >= 'a' && *(s + x) <= 'z')
*(s + x) -= 'a' - 'A';
x++;
}
return (s);
}
