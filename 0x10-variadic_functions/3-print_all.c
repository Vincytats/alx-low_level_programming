#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all -  Prints anything
 * @format: List all the arguments passed to the function
 */
void print_all(const char * const format, ...)
{       
int a = 0;
char *str, *sep = "";
va_list list;
va_start(list, format);
if (format)
{       
while (format[i])
{       
switch (format[i])
{       
case 'c':
printf("%s%f", sep, va_arg(list, int));
break;
