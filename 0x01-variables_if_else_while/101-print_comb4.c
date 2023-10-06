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
int x, y, z;

for (x = '0'; x <= '7'; x++)
{	
for (y = x + 1; y <= '8'; y++)
{	
for (z = y + 1; z <= '9'; z++)
{	
if ((y != x) && (z != x) && (z != y))
{	
putchar(x);
putchar(y);
putchar(z);
if (!(x == '7' && y == '8'))
{	
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return 0;
}
