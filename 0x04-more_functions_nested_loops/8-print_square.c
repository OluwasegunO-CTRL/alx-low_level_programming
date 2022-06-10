#include "main.h"

/**
 * print_square - draw squares
 * @size: number of times underscore is printed
 *Description: can only use _putchar to print use # to print square
 */

void print_square(int size)
{
	int c, i;

	i = 0;

	if (size < 1)
		_putchar('\n');

	while (i < size)
	{
		c = 0;
		while (c < size)
		{
			_putchar('#');
			c++;
		}
		_putchar('\n');
		i++;

	}
}
