#include <stdio.h>
#include "main.h"
/**
* _strcpy - copies a string
* description: copies a string
* @dest - first input
* @src: seconf input
* @n: third input
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
        int c = 0, c2 = 0;

        while (src[c2] != '\0')
                c2++;
                
        if (n > c2)
                n = c2;

        for (c = 0; c < n; c++)
        {
                dest[c] = src[c];
        }
        
        while (c2 < n)
        {
                dest[c] = '\0';
                c++;
        }

        return (dest);
}
int main(void)
{
    char s1[98];
    char *ptr;
    int i;

    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    printf("%s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    printf("%s\n", ptr);
    
    return (0);
}
