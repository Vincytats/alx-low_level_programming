#include "main.h"
/**
 * _memset - Fills block of memory with specified value
 * @s: address of memory to be filled
 * @b: preffered value
 * @n: number of bytes to be changed
 * Return: change array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
int a = 0;
for (; n > 0; a++)
{
s[a] = b;
n--;
}
return (s);
}
