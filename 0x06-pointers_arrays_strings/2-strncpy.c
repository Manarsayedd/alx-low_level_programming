#include "main.h"
/**
 * _strncpy - copies a astring
 * description: copies a string
 * @dest: first input
 * @src: second input
 * @n:third input 
 * return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0, c2;

	for (c = 0; src[c]; c++)
	{
		dest[c] = src[c];
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}	
