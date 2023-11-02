#include "main.h"
#include <stdio.h>
#include <stdlib.h> 
/**
 *malloc_checked - cause normal process termination with a status value of 98
 *
 *@b: allocated memory
 *
 *Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
char *x;

x = malloc(b);
if (x == NULL)
exit(98);
else
return (x);
}