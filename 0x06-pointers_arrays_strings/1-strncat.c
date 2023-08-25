#include "main.h"
#include <stdio.h>
/**
 * _strncat - function to concatenates 2 string
 *
 * description: used to concatenates 2 strings
 * Return: alwyas 0 (success)
 * @dest: first input
 * @src: seconf input
 */
char *_strncat(char *dest, char *src, int n)
{
	int c = 0, c2;
	while (dest[c] != '\0')
		c++;
	for (c2 = 0; c2 < n, c2++)
	{
		dest[c++] = src[c2];
	}
	return (*dest)
}
