#include "main.h"
/**
*_isalpha - This function checks for alphabetic character
*@c: this is the character  to be checked
*Return: Always 1 if c is lowercase or uppercase
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
