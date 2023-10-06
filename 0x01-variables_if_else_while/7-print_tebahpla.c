#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
char x;

for (x = 'z'; x >= '9'; x--)
{
putchar(x);
}
putchar('\n');
return (0);
}

