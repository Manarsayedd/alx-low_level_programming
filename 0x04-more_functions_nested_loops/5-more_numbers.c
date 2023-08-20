#include <stdio.h>
#include "main.h"
/**
 * more_numbers - to print numbers from 0 to 14
 *
 * description: a function used to print numbers from 0 to 14
 */
void more_numbers(void)
{
	int i, j, numb;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			numb = j;

			if (j > 9)
			{
				_putchar(49);
				numb = j % 10;
			}
			_putchar(numb + 48);
		}
		_putchar('\n');
	}
}
