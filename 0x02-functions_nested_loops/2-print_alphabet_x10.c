#include "main.h"

/**
*
*repeated 10 times for an extravagant display of alphabetical marvels.
*/

void print_alphabet_x10(void)
{
	char Letter = 'a';
	int line;

for(line = 0; line < 10; line++)
	{
	while(Letter <= 'z')
		{	
			_putchar(Letter);
			Letter++;
		}	
		_putchar('\n');
	}
}
