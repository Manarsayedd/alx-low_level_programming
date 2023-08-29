#include "main.h"
#include <stdio.h>
/**
 *_strchr - indicates if the letter we are searching for is in the string
 * @s: first input
 * @c: seconf input
 * Return: if found s[j]
 *            not fund null
 */
char *_strchr(char *s, char c)
{
	int i = 0, j = 0;
	bool here = false;

	while (s[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		if (s[j] == c)
		{
			here = true;
			break;
		}
	}
	if (here == true)
		return (s[j]);
	else
		return (NULL);
}
