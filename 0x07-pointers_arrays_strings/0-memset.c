#include "main.h"
#include <stdio.h>

/**
 * _memset - fills the first n bytes of the memory area s with b
 *
 * @s: pointed area
 * @b: what we fill with
 * @n: number of bytes
 *
 * Return: The pointer to the memory ares s
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
