#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array given number of elements and size
 * @nmemb: number of elements
 * @size: size of each element
 * Return: Null if error, else pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i, array_size;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	array_size = (nmemb * size);
	p = malloc(array_size);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < array_size)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
