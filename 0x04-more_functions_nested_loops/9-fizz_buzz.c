#include "main.h"
#include <stdio.h>

/**
 * main - The Starting point of the program
 *
 * Return: Ends the program with code 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i != 99)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i == 99)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
