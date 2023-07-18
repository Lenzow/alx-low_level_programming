#include "main.h"

/**
 * print_alphabet - its printing the alphabets in lowercase ended by a new line!
 */

void print_alphabet(void)
{
	char azletter;
	for (azletter = 'a'; azletter <= 'z'; azletter++)
		_putchar(azletter);

	_putchar('\n');
}