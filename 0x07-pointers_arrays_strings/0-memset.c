#include "main.h"
#include <stdio.h>

/**
 * _memset - ironnou
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while(n--)
	{
		*p = b;
		p++;
	}
	return (s);
}
