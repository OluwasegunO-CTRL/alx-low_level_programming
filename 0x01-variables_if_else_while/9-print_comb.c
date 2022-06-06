#include <stdio.h>
/**
 * main - the main function print string in putchar
 *
 * Description: print alphabet
 * Return: 0
 */

int main(void)
{
int c;

for (c = '0'; c <= '9'; c++)
{

	putchar(c);

	if (c <= '8')
{
	putchar(',');
	putchar(' ');
}

}

putchar('\n');
return (0);
}
