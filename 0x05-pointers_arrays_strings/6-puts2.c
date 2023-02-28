#include "main.h"
#include <stdio.h>

/**
 * puts2 - print every char of the string
 *
 * @str: input for checker
 *
 * Return: 0 anyway
*/
void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	if (string % 2 == 0)
		printf("%c", str[string]);
	printf("\n");
}
