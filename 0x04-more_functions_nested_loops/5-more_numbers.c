#include "main.h"

/**
 * more_numbers - print 1 to 14
 *Description:
 *
 */

void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
			_putchar(j / 10 + '0');

			_putchar(j % 10 + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
