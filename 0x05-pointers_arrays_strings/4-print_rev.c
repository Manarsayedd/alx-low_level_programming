#include <stdio.h>
#include "main.h"
/**
 * print_rev - function prints string in reverse
 *
 * description: reverse a string
 * @s: input of the function
 */
void print_rev(char *s)
{
	int i;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i] + 0);
	_putchar('\n');
}
