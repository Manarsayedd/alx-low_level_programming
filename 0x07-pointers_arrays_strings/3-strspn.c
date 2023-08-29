#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of the prefix
 * @s: first input
 * @accept: second input
 * Return: cnt
 */
unsigned int _strspn(char *s, char *accept)
{
       	unsigned int cnt = 0, i, j;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				cnt += 1;
				break;
			}
		}
	}
	if (accept[i] == '\0')
		cnt += 1;
	return (cnt);
}

