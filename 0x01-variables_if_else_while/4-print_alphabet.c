#include <stdio.h>
/**
 * main - the main function print string in putchar
 *
 * Description: print alphabet
 * Return: 0
 */

int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
	if (c != 'e' && c != 'q')
	{
	putchar(c);
	}
}

putchar('\n');
return (0);
}
