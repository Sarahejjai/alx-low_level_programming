#include "main.h"

/**
 * print_most_numbers - Print the numbers from 0-9 except for 2 and 4.
 *
 * Return: number
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
	if (n != 2 && n != 4)
	{
	_putchar((n % 10) + '0');
	}
	}
	_putchar('\n');
}
