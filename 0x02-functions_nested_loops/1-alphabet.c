#include "main.h"

/**
 * print_alphabet -> print all alphabet in lowercase
 */
void print_alphabet(void)
{
	char s = 'a';

	while (s <= 'z')
	{
		_putchar(s);
		s++;
	}
	_putchar('\n');
}
