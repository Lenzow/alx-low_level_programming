#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to be checked.
 *
 * Return: 1 if character is a letter (lowercase or uppercase), 0 otherwise.
 */
int _isalpha(int c)
{
	int lowercase = _islower(c);
	int uppercase = _isupper(c);

	if (lowercase || uppercase)
		return (1);
	else
		return (0);
}
