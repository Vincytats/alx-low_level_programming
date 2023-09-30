#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c:character to be print
 * Return: success 1.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}