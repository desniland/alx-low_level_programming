#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds two values
* @a: value to add
* @b: value to add
*
* Return: returns the sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two values
 * @a: first value
 * @b: second value
 *
 * Return:  returns the difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two values
 * @a: first value
 * @b: second value
 *
 * Return:  returns the product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: value one
 * @b: value two
 *
 * Return:  returns the result of the division of a by b
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - find remainder of division
 * @a: first value
 * @b: second value
 *
 * Return:  returns the remainder of the division of a by b
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
