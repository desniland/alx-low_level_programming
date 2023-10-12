#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int x;
unsigned long y = 0, z = 1, sum;

for (x = 0; x < 50; x++)
{
sum = y + z;
printf("%lu", sum);
y = z;
z = sum;
if (x == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
