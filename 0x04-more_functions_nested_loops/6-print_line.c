#include "main.h"

/**
 * print_line - print a straight line using '-'
 *  @n: the number of '-' to be printed
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
	for (len = 0; len < n; len++)
	_putchar('-');
	}
	_putchar('\n');
}
