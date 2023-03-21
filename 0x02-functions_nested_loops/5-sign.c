#include "main.h"

/**
 * print_sign - Determines if input number is
 * greater, less than than 0 or equal
 * @n: the int to check
 * Return: 1 is greater than zero. 0 is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
