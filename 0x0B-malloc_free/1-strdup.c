#include "main.h"
/**
 * _strdup - function for copying a string
 * @str: first input
 * Return: ptr
 */
char *_strdup(char *str)
{
	int i, cnt = 0, j;

	char *ptr;

	for (i = 0; str[i] != '\0'; i++)
		cnt++;

	ptr = malloc(cnt * sizeof(*str) + 1);
	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < cnt; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
