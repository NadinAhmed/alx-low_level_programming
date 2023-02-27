#include "main.h"

/**
 * swap_int - swaping teo values
 *
 * @a: first input
 *
 * @b: second input
 *
 * Return: 0 anyway
*/
void swap_int(int *a, int *b)
{
	int p = *a;

	*a = *b;
	*b = p;
}
