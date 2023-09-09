#include <stdio.h>
/**
 * main - function of the task
 * Return: always zero
 */
int main(void)
{
int number = 0;
while (number <= 9)
{
putchar(number + '0');
number++;
}
return (0);
}
