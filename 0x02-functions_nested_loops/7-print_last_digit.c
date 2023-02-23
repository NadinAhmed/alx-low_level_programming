#include "main.h"

/**
 * print_last_digit -> print last digit of given number
 *
 * @i: The number you want to check
 *
 * Return: last digit of i
 */
int print_last_digit(int i)
{
	int n = i % 10;

	if (n < 0)
	{
		_putchar(-n + 48);
		return (-n);
	}
	_putchar(n + 48);
	return (n);
}
