#include <stdio.h>
#include "main.h"
/**
 * _strlen - return the length of string
 *
 * description: function returns the length of a string
 * @s: input of the function
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
