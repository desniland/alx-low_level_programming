#include <stdio.h>
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
int p, q;

for (p = 0; p <= 98; p++)
{
for (q = p + 1; q <= 99; q++)
{
putchar((p / 10) + '0');
putchar((p % 10) + '0');
putchar(',');
putchar(' ');
putchar((q / 10) + '0');
putchar((q % 10) + '0');
putchar(p != 98 || q != 99 ? ',' : '\n');
}
}
return (0);
}
