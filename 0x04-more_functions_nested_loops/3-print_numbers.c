#include "main.h"

/**
 * print_numbers -> print numbers from 0 to 9
 * return always 0
 */
void print_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		_putchar(n + 48);
		n++;
	}
	_putchar('\n');
}
