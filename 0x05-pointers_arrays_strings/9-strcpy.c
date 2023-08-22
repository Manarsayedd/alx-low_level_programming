#include <stdio.h>
#include "main.h"
/**
 * *_strcpy - copy char array from another array
 * description: copy char array from another array
 * @dest: first input
 * @src: second input
 * return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
