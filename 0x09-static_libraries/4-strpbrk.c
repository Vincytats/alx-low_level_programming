#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: entered value
 * @accept: entered value
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
}
s++;
}
return ('\0');
}
