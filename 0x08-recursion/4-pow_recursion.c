#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - print power
 * @x: input number
 * @y: is the number of power
 * Return: power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
