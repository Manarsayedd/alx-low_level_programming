#include <stdio.h>
#include "main.h"
/**
 * print_line - to print _ n of times
 *
 * description: function used to print _ n times
 *
 * @n: input of the function
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}	
