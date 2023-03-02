#include "main.h"
#include <stdio.h>

/**
 * _strcat - prints a string, in reverse
 *
 * @dest: first string
 * @src: second string
 *
 * Return: The pointer for the second string
*/
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (result);
}
