#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 *
 * @s: input fr checker
 *
 * Return: 0 anyway
*/
void print_rev(char *s)
{
	int l = 0, i;
	char *str = s;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	for (i = l - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
