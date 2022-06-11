#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Find and print the largest prime factor of the number
 * 612852475143
 * Return: 0
 */

int main(void)
{
	int c;
	long int num = 612852475143;

	for (c = 2; c <= sqrt(num); c++)
	{
		if (num % c == 0)
		{
			num = num / c;
			c = 1;
		}
	}
		printf("%ld\n", num);
	return (0);
}
