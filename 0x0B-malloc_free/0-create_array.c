#include "main.h"
/**
 * *create_array - function to make an array
 * Return: null if size equals 0 else it returns the pointer
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);
	if (size == 0 || n == 0)
		return (NULL);
	while (size--)
		n[size] = c;

	return (n);
}

