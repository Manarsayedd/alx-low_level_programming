#include "main.h"
/**
 * _strncpy - copies a astring
 * descripition: copies a string
 * @dest: first input
 * @src: second input
 * @n: third input
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0, c2;

	while (src[c2] != '\0')
		c2++;

	for (c = 0; c < c2; c++)
	{
		dest[c] = src[c];
	}
	if (c < n)
	{
		dest[c] = '\0';
		c++;
	}

	return (dest);
}
