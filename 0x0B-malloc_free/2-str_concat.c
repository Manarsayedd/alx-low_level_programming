#include "main.h"
/**
 *
 */
char *str_concat(char *s1, char *s2)
{
	int v1, v2, v3;
	char *ptr;

	for (v1 = 0; s1[v1] != '\0'; v1++)
		;
	for(v2 = 0; s2[v2]; v2++)
		;
	v3 = (v1 + v2) - 1;
	for (
