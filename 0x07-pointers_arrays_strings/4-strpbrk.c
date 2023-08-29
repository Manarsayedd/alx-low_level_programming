#include "main.h"
#include <stdio.h>
/**
 *
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
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
