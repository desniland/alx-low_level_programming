#include <stdio.h>
/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
*/
int main(void)
{
unsigned long x = 0, y = 1, sum;
float tot_sum;

while (1)
{
sum = x + y;
if (sum > 4000000)
break;
if ((sum % 2) == 0)
tot_sum += sum;
x = y;
y = sum;
}
printf("%.0f\n", tot_sum);
return (0);
}
