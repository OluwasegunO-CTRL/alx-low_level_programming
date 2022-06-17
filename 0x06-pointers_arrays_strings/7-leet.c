#include "main.h"

/**
 * leet - encode a string into 1337
 * @x: string
 * Return: encoded string 'x'
 */

char *leet(char *x)
{
	int i = 0, b, l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', '1'};

	while (x[i])
	{
		b = 0;
		while (b < l)
		{
			if (x[i] == tr[b] || x[i] - 32 == tr[b])
			x[i] = trw[b];
			b++;
		}
		i++;

	}

	return (x);
}
