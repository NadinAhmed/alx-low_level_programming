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
	int n = '0', s = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (s <= 'f')
	{
		putchar(s);
		s++;
	}
	putchar('\n');
	return (0);
}
