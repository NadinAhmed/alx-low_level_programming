#include "main.h"
#include <stdio.h>

/**
 *  _memcpy- ironnou
 * @dest: pointer to char params
 * @src: data to change
 * @n: index
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
