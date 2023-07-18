#include"main.h"

/**
 * main - print _putchar using putchar prototype
 *
 * Return: Always 0 (success)
 *
*/

void print_alphabet(void)
{
	char aletter = 'a';
	while (aletter <= 'z')
	{
		_putchar(aletter);
		aletter++;
	}
	_putchar('\n');
}
