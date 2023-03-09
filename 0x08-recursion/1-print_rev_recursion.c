#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print string in reverse
 * @s: input string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_puts_recursion(s + 1);
	_putchar(*s);
}
