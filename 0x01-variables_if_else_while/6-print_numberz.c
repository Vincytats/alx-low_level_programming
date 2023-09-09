#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: always 0
 */
int main(void)
{
int number;
putchar('0');
putchar('\n');
number = 1;
while (number <= 9)
{
putchar(number + '0');
putchar('\n');
number++;
}
return (0);
}
