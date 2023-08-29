#include "main.h"
#include <stdio.h>

/**
 * _memset - set memory with constant bytes wewewewe wewewewe
 * @s: first input
 * @b: second input
 * @n: third input
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
