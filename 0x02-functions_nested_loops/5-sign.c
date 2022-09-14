#include "main.h"

/**
 * main - entrypoint
 * Descripion: Determines if the input number is greater, equal or less than zero
 * @n: The input number is an integer
 * Return: 1 is greater than zero. 0 is zero. -1 is less than zero
 */
int print_sign(int c)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
