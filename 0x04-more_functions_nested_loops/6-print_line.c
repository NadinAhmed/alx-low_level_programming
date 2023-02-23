#include "main.h"

/**
 * print_line -> - according to n
 *
 * @n: the number of - in each line
 *
 * return always 0
 */

void print_line(int n)
{
	int n, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
