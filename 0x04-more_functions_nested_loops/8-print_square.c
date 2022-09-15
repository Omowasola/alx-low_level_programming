#include "main.h"

/**
 * print_square - print square using a symbol
 * @size: the size of the square
 * return: void
 */

void print_square(int size)
{
	int j, i;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
