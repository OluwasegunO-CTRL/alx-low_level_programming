#include "main.h"

/**
 * factorial - return factorial
 * @n: int type
 * Return: return factorial of digit
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}

