#include"main.h"

/**
 * print_sign - print the sign of a number
 * @n: is the number to be checked
 * Return: 1 if n greater than 0, 0 if n equals 0, -1 if smaller 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
