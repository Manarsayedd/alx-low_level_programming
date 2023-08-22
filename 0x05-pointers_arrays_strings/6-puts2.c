#include <stdio.h>
#include "main.h"
/**
 *
 */
void puts2(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] % 2 == 0)
			_putchar(str[i] + '0');
		i++;
	}
	_putchar('\n');
}
