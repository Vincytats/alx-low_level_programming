#include <stdio.h>


/**
 * main - prints all possible different combinations of three digits.
 * in ascending order separated by comma followed by space
 * Return: Always 0.
 */
int main(void)
{
int digt1, digt2, digt3;
for (digt1 = 0; digt1 < 8; digt1++)
{
for (digt2 = digt1 + 1; digt2 < 9; digt2++)
{
for (digt3 = digt2 + 1; digt3 < 10; digt3++)
{
putchar((digt1 % 10) + '0');
putchar((digt2 % 10) + '0');
putchar((digt3 % 10) + '0');
if (digt1 == 7 && digt2 == 8 && digt3 == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
