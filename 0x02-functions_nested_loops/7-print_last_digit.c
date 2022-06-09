#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @m: int type number
 * Return: return value of last digit
 */

int print_last_digit(int m)
{
	int mv;

	if (m < 0)
	{
		mv = -1 * (m % 10);
		_putchar(mv + '0');
		return (mv);
	}

	else
	{
		mv = m % 10;
		_putchar(mv + '0');
		return (mv);
	}
}

