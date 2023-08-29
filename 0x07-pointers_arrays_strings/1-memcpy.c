#include "main.h"
#include <stdio.h>

/**
*_memcpy - set memory with constant bytes wewewewe wewewewe
* @dest: first input
* @src: second input
* @n: third input
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
