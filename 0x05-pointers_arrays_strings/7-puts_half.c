#include <stdio.h>
#include "main.h"
/**
 * puts_half - print half of the string
 *
 * description: wewewe
 * @str: input of the function
 */
void puts_half(char *str)
{
	int i = 0, j, n;

	while (str[i])
		i++;
	if (i % 2 != 0)
		n = (i - 1) / 2;
	else
		n = i;

	for (j = i / 2; j < n; j++)
	{
		_putchar(str[j]);
	}

