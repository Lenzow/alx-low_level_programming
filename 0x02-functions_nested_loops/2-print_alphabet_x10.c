#include "main.h"

/**
 * print_alphabet_x10 - Repeatedly prints the lowercase alphabet, 10 times.
 */
void print_alphabet_x10(void)
{
	char letter;
	int line;

	for (line = 0; line < 10; line++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
