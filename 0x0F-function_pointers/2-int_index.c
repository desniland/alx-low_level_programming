#include "function_pointers.h"
/**
 * int_index - returns the index of the first element
 * @array: ...
 * @size: is the number of elements in the array array
 * @cmp:  is a pointer to the function to be used to compare values
 *
 * Return: -1 if no element matches or if size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int y = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (y < size)
			{
				if (cmp(array[y]))
					return (y);

				y++;
			}
		}
	}
	return (-1);
}
