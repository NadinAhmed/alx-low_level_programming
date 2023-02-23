#include "main.h"

/**
 * print_sign -> check the sign of given number
 *
 * @n: The number you want to check
 *
 * Return: 1 number is positive, 0 number is '0', -1 number is negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
