#include "main.h"

/**
 * _islower(int c) - checks whether is lower or not
 *
 * Return: 0 if it is not, 1 if it is lower.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}