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
	char s = 'a', S = 'A';

	while (s <= 'z')
	{
		putchar(s);
		s++;
	}
	while (S <= 'Z')
	{
		putchar(S);
		S++;
	}
	putchar('\n');
	return (0);
}
