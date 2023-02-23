#include "main.h"

/**
 * _isdigit - check if c is between 0 and 9
 *
 * @c: input for checker
 *
 * Return: 1 if yes, 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
