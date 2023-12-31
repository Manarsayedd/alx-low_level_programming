#include "main.h"
#include <stdio.h>

/**
* _strchr - indicates if the letter we are searching for is in the string
* @s: first input
* @c: second input
* Return: if found s[j]
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (c == '\0')
		return (&s[i]);

	return (NULL);
}
