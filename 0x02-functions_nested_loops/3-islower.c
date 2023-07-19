#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	int i;
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; lowercase[i] != '\0'; i++)
	{
		if (c == lowercase[i])
			return (1);
	}

	return (0);
}
