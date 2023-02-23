#include "main.h"

/**
 * print_alphabet_x10 -> print all alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char s = 'a';

		while (s <= 'z')
		{
			_putchar(s);
			s++;
		}
		_putchar('\n');
	}
}
