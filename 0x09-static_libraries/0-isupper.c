#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isupper - check uppercase
 * @c: char checked
 * Return: uppercase return 1, else return 0
 */
int _isupper(int c)
{
return (c >= 'A' && c <= 'Z');
}
