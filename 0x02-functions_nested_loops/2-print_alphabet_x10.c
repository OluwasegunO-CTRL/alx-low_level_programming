#include "main.h"

/**
 * print_alphabet_x10 - function to print abc
 *
 * Return 0.
 */

void print_alphabet_x10(void)
{
	char i = 0, c;

	while (i < 10)
{
	c = 'a';
	while (c <= 'z')
{
	_putchar(c);
	c++;
}

	_putchar('\n');
	i++;

}
}
