#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - the main function print the string in
 * printf
 * @n: frorr
 * Despriction: print negative positive
 * Return: 0
 */

int positive_or_negative(int i)
{

	/*srand(time(0));
	i = rand() - RAND_MAX / 2; */

	if (i > 0)
{
	printf("%d is positive\n", i);
}
	else if (i == 0)
{
	printf("%d is zero\n", i);
}
	else
{
	printf("%d is negative\n", i);
}

return (0);
}
