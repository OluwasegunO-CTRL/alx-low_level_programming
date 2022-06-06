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

for (c = '0'; c <= '9'; c++)
{

	putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}

putchar('\n');
return (0);
}
