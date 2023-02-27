#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line
 *
 * @str: input fr checker
 *
 * Return: 0 anyway
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str);
		str++;
	}
	printf("\n");
}
