#include "main.h"
#include <stdio.h>
/**
 * times_table - prints out the times table with increased spacing
 *
 * Return: No return value (void)
*/
void times_table(void)
{
int h, v, result;

for (h = 0; h < 10; h++)
{
for (v = 0; v < 10; v++)
{
result = h * v;
if (v == 0)
{
printf("%3d", result);
}
else
{
printf("%4d", result);
}
}
printf("\n");
}
}
