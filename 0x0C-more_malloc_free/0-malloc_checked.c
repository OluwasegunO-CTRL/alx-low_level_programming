#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocatenmemory using malloc.
 * Description: if malloc fails, terminate with process status 98
 * @b: unsigned it memory size to allocate
 * Return: void pointer to malloc'd mem. space
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
