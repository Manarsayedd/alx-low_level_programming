#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Description: a function used to print numbers from 0 to 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
