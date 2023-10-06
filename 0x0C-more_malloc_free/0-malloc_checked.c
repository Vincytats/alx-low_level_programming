#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - Alocates memory
 * @b: the size to aloocate
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
void *x;
x = malloc(b);
if (x == NULL)
exit(98);
return (x);
}

