#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _islower - checks for lowercas
 * @c: character
 * Return: 1 if c is lowercase, 0 else
 */
int _islower(int c)
{
return (c >= 'a' && c <= 'z');
}
