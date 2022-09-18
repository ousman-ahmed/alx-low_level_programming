#include <stdio.h>

/**
 * main - entry point
 * Return: 0 for success
 */
int main(void)
{
	char c;
	char n;

	c = 'a';
	n = '\n';
	while (c <= 'z')
	{
		putchar(c++);
	}
	putchar(n);
	return (0);
}
