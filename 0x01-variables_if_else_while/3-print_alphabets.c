#include <stdio.h>

/**
 * main - points alpha in lower and upper case
 * Return:Always 0
 * */
int main(void)

	har ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
