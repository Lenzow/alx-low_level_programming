#include "main.h"

/**
 * print_alphabet - Witness the lowercase alphabet waltz
 * on the stage of your console!
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
