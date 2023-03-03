#include "main.h"
#include <stdio.h>

/**
 * _strcmp -compare lenght of two string
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if equal, 15 if greater, -15 if less
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
