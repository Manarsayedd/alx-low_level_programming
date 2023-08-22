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
	int i = 0, j;

	while (str[i] != '\0')
		i++;

	for (j = i / 2; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
}
