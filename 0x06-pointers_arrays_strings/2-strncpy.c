#include "main.h"
#include <stdio.h>

/**
 * _strncpy - prints a string, in reverse
 *
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 *
 * Return: The pointer for the second string
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;
	int i = 0;

	while (i < n && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (result);
}
