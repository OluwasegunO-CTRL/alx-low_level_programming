#include "main.h"

/**
 * _sqrt_recursion - find square root
 * @n: int type
 * Return: return natural square root of num
 */

int _sqrt_recursion(int n)
{
	return (halp(n, 1));
	}

/**
 * halp - helper function to solve sqrt_recursion
 * @c: number to det if square root
 * @i: incrementer to compare against 'c'
 * Return: square root if natural square root, or -1 if none found
 */

int halp(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (halp(c, i + 1));
	else
		return (-1);
}
