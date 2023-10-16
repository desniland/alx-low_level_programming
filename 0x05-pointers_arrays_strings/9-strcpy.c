#include "main.h"
/**
 * _strcpy - copy the string pointed to by src to dest
 * @dest: char to check
 * @src: char to check
 * Return: 0 is success
*/
char *_strcpy(char *dest, char *src)
{
int x;

for (x = 0; src[x] != '\0'; x++)
dest[x] = src[x];
dest[x] = '\0';
return (dest);
}
