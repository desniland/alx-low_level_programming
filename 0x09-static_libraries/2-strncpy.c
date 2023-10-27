#include "main.h"
/**
 *_strncpy - function that copies a string
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int x;

for (x = 0; x < n && *(src + x); x++)
{
*(dest + x) = *(src + x);
}
for (; x < n; x++)
{
*(dest + x) = '\0';
}
return (dest);
}
