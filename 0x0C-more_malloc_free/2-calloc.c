#include <stdlib.h>
#include "main.h"
/**
 * *_memset - fills memory with constant byte
 * @s: memory to be filled
 * @b: character to copy
 * @n: number of times to copy
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
/**
 * *_calloc - allocates memory
 * @nmemb: number of elements
 * @size: size of element
 * Return: pointer to aloocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
_memset(ptr, 0, nmemb * size);
return (ptr);
}
