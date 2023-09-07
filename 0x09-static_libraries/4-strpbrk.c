#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - function locates the first occurance
 * @s: first input
 * @accept: second input
 * Return: p
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;
	char *ptr;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != 0)
		{
			if (accept[j] == s[i])
			{
				ptr = &s[i];
				return (ptr);
			}
			j++;
		}
		i++;
	}
	return (0);
}
