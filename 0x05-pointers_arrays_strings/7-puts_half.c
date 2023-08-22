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
	int i = 0;

	while (str[i] != '\0')
		i++;
	i++;

	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
