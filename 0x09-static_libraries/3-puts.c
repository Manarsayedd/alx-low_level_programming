#include <stdio.h>
#include "main.h"
/**
 * _puts - outputs a string
 *
 * description: used to output the string pointed to
 * @str: input of the function
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
