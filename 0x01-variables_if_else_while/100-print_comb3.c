#include <stdio.h>
/**
 * main - print the function putchr
 *
 * Description: print different combination
 * of two digit
 * Return: 0
 */

int main(void)
{
	int c = 0;
	int fdd;
	int bdd;

	while (c <= 99)
{
	fdd = (c / 10 + '0');
	bdd = (c % 10 + '0');

	if (fdd < bdd)
	{
		putchar(fdd);
		putchar(bdd);

		if (c < 89)

		{
			putchar(',');
			putchar(' ');
		}
	}
	c++;
}
putchar('\n');
return (0);
}




