#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - The Starting point of the program
 *
 * Return: Ends the program with code 0
 */
int main(void)
{
	char s = 'a';

	while (s <= 'z')
	{
		putchar(s);
		s++;
	}
	putchar('\n');
	return (0);
}
