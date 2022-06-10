#include "main.h"

/**
 * print_diagonal - draw diagonal line
 * @n: number of times underscore is printed
 *Description: can only use _putchar to rrpint
 */

void print_diagonal(int n)
{
	int c, i;

	c = 0;
	while (n > 0)
	{
		i = c;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		n--;

	}
	if (c < 1)
		_putchar('\n');
}
