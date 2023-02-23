#include "main.h"

/**
 * print_most_numbers -> print numbers from 0 to 9 except 2, 4
 *
 * Return: always 0
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		if (n != 2 || n != 4)
			_putchar(n + 48);
		n++;
	}
	_putchar('\n');
}
