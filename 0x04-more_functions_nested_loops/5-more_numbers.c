#include "main.h"

/**
 * more_numbers - print numbers from 0-14 tine times.
 */

void more_numbers(void)
{
         int n, count;

	 for (count = 1; count <= 9; count++)
	 {
	 for (n = 0; n <= 14; n++)
	 {
	 if (n > 9)
	 _putchar('1');
	_putchar((n % 10) + '0');
	 }
	_putchar('\n');
	 }
}
