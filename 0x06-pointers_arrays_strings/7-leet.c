#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string 's'
 */

char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		while (s[i] == 97 || s[i] == 65)
			s[i] = '4';
		while (s[i] == 101 || s[i] == 69)
			s[i] = '3';
		while (s[i] == 111 || s[i] == 79)
			s[i] = '0';
		while (s[i] == 116 || s[i] == 84)
			s[i] = '7';
		while (s[i] == 108 || s[i] == 76)
			s[i] = '1';
	}

	return (s);
}
