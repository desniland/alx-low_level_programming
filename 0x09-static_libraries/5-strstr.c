#include "main.h"
/**
 * _strstr - locates a substring
 *
 * @haystack: the longer string to search
 * @needle: the first occurrence of the substring
 *
 * Return: a pointer beg of substring or @Null if it not foound.
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int x = 0, y = 0;

while (haystack[x])
{
while (needle[y] && (haystack[x] == needle[0]))
{
if (haystack[x + y] == needle[y])
y++;
else
break;
}
if (needle[y])
{
x++;
y = 0;
}
else
return (haystack + x);
}
return (0);
}
