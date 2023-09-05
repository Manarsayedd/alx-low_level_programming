#include "main.h"
/**
 * *create_array - function to make an array
 * Return: null if size equals 0 else it returns the pointer
 * @size: first input
 * @c: second input
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size * sizeof (char));

	if (size == 0 || n == NULL)
		return (NULL);

	while (size--)
		n[size] = c;

	return (n);
}

