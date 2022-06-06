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
	int ld;

	while (c <= 999)
{
	fdd = (c / 100 + '0');
	bdd = (c / 10 % 10 + '0');
	ld = (c % 10 + '0');

	if ((fdd < bdd) && (bdd < ld))
	{
		putchar(fdd);
		putchar(bdd);
		putchar(ld);

		if (c < 789)

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




