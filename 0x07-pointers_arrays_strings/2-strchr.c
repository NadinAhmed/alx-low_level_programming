#include "main.h"
#include <stdio.h>

/**
 * _strchr - ironnou
 * @s: pointer to char params
 * @c: data to change
 * Return: *c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
