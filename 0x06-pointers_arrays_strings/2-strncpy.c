#include <stdio.h>
#include "main.h"
/**
* _strncpy - copies a string
* description: copies a string
* @dest: first input
* @src: seconf input
* @n: third input
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0, c2 = 0;

	while (src[c2] != '\0')
		c2++;

	if (n > c2)
		n = c2;

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}
	while (c2 < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
