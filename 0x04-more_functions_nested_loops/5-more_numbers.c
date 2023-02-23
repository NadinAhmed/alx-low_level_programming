#include "main.h"

/**
 * more_numbers -> print numbers from 0 to 9 repeted 10 times
 * return always 0
 */
void more_numbers(void)
{
	int n, i, count;
	
	for (i = 0; i `< 10; i++)
	{
		for (count = 0; count <= 14; count++)
		{
			n = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				n = count % 10;
			}
			_putchar(n + 48);
		}
		_putchar('\n');
	}
}
