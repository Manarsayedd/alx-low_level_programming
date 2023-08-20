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
		for (i = 0; i < n; i++)
		{
			for (space = 0; space < cnt; space++)
			{
				_putchar(' ');
			}
			_putchar(95);
			_putchar('\n');
			cnt++;
		}
	}
}

