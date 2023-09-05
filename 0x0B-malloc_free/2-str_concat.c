#include "main.h"
/**
 * str_concat - function that puts two strings in one array of string
 * @s1: first input
 * @s2: second input
 * Return: ptr
 */
char *str_concat(char *s1, char *s2)
{
	int v1, v2, v3;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (v1 = 0; s1[v1] != '\0'; v1++)
		;
	for (v2 = 0; s2[v2]; v2++)
		;

	ptr = malloc((v1 + v2) * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);

	for (v3 = 0; v3 < v1 + v2; v3++)
	{
		if (v3 < v1)
			ptr[v3] = s1[v3];
		else
			ptr[v3] = s2[v3 - v1];
	}
	ptr[v3] = '\0';
	return (ptr);
}
