#include "main.h"

/**
 * _strlen - swaping teo values
 *
 * @s: input fr checker
 *
 * Return: the lenght of string
*/
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
