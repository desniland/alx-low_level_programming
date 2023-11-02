#include "main.h"

/**
 ** _realloc - reallocates a memory block using malloc and free functions
 *
 *@ptr: pointer to the memory previously allocated
 *@old_size:is the size, in bytes, of the allocated space for ptr
 *@new_size: the new size, in bytes of the new memory block
 *
 *Return: pointer allocate new size memory, or NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int x, y = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		y = old_size;
	for (x = 0; x < y; x++)
		p[x] = oldp[x];
	free(ptr);
	return (p);
}
