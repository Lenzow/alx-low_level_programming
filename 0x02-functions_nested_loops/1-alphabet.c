#include"main.h"

/**
 * main - print _putchar using putchar prototype
 *
 * Return: Always 0 (success)
 *
*/

int main(void)
{
	void print_alphabet(void);
	return (0);
}

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