#include "main.h"

/**
 * main - entrypoint
 * Description: shows 1 if it is a letter,lowercase or uppercase. Another case,  returns 0
 * @c: The character in ASCII code
 * Return: 1 for letters, 0 for the rest
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
