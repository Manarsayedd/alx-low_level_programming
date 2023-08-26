#include "main .h"
/**
 *_strcmp - compares
 *
 * description: compares
 *
 * @s1: first
 * @s2: second
 * Return: negative wewewe
 */
int _strcmp(char *s1, char *s2)
{
	int ret, c = 0, c2 = 0;

	while (s1[c] != '\0')
		c++;
	while (s2[c2] != '\0')
		c2++;
	if (c < c2)
		ret = -15;
	else if (c == c2)
		ret = 0;
	else
		ret = 15;

	return (ret);
}


