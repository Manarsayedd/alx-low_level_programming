#include <stdio.h>
#include "main.h"
/**
 * print_square - prints square with size dimentions
 *
 * description: prints square with size dimentions
 *
 * @size: input of the function
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; size++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
