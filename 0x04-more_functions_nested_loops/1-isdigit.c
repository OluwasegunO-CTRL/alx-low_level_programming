#include "main.h"

/**
 * _isdigit - print 1 if c is digit
 * @c: int type
 * Return: 1 if c is a digit
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}
