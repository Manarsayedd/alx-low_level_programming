#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses a string
 *
 * description: reverses a string
 * @s: input of the function
 */
void rev_string(char *s)
{
	int i = 0, ci = 0, j = 0;

	char ss[100000];

	while (s[i])
		i++;

	while (i--)
	{
		s[i] = ss[j];
		j++;
	}

	while (ss[ci])
	{
		_putchar(ss[ci]);
	}
	_putchar('\n');
}


