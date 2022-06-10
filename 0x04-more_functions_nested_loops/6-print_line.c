#include "main.h"

/**
 * print_line - draw straight line
 * @n: number of times underscore is printed
 *Description: can only use _putchar to rrpint
 */

void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('_');

		c++;
	}
	_putchar('\n');
}
