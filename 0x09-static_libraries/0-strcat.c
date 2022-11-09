#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: parameter1
 * @src: parameter2
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;

	while (dest[length] != '\0')
	{
		++length;
	}

	for (j = 0; src[j] != '\0'; ++j)
	{
		dest[length] = src[j];
	}

	dest[length] = '\0';

	return (dest);
}
