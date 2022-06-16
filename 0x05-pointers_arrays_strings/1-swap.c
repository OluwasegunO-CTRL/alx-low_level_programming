#include "main.h"

/**
 * swap_int - swap values of two integers
 * @a:  int type
 * @b: int type
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
