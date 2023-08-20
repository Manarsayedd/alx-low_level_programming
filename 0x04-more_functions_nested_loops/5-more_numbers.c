#include <stdio.h>
#include "main.h"
/**
 * more_numbers - to print numbers from 0 to 14
 *
 * description: a function used to print numbers from 0 to 14
 */
void more_numbers(void)
{
	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar(49);
				_putchar((j % 10) + 48);
			}
			else
			{
				_putchar(j + 48);
			}
		}
		_putchar('\n');
	}
}
