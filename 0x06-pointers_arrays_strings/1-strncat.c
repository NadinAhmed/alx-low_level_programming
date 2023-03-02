#include "main.h"
#include <stdio.h>

/**
 * _strncat - prints a string, in reverse
 *
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 *
 * Return: The pointer for the second string
*/
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (i < n && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	if (i < n)
	{
		*dest = '\0';
	}
	return (result);
}
