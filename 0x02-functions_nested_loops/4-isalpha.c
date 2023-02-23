#include "main.h"

/**
 * _isalpha -> check if the given character is alpha
 *
 * @c: The character you want to check
 *
 * Return: 1 if the character is alpha, 0 otherwise.
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
