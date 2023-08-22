#include <stdio.h>
#include "main.h"
/**
 * print_array - prints array
 *
 * description: prints array
 * @a: first input
 * @n: second input
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (n - i != 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	_putchar('\n');
}
