#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - prints \ n times
 *
 * description: function that prints \ n times
 *
 * @n :input of the function
 */
void print_diagonal(int n)
{
	int i, cnt = 1, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (space = 1; space <= i; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}

