#include <stdio.h>

/**
 * main - prints the string in function printf
 *
 * Description: using the main function
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %1d bytes(s)\n", sizeof(c));
	printf("Size of an int: %1d bytes(s)\n", sizeof(i));
	printf("Size of a long int: %1d bytes(s)\n", sizeof(li));
	printf("Size of a long long int: %1d bytes(s)\n", sizeof(lli));
	printf("Size of a float: %1d byte(S)\n", sizeof(f));
	return (0);

}
