#include "main.h"

/**
 * power_operation - find the square
 * @x: integer whose root is to be found
 * @y: integer to determine root
 *
 * Return: integer, square root of n
 */
int power_operation(int x, int y)
{

	if ((y * y) == x)
		return (y);
	if (y == x)
		return (-1);
	return (0 + power_operation(x, y + 1));
}
