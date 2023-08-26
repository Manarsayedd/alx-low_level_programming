#include "main.h"
#include <stdio.h>
/**
 * _strcat - used to concatenates two strings
 *
 * description: wewewewe
 * @dest: frist input to the function
 * @src: second input to the function
 * Return: ay haga
 */
char *_strcat(char *dest, char *src)
{
	int c = 0, c2;

	while (dest[c] != '\0')
		c++;

	for (c2 = 0; src[c2]; c2++)
	{
		dest[c++] = src[c2];
	}

	dest[c++] = '\0';

	return (dest);
}
