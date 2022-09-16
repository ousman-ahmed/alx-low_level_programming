#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints a to z
 *
 * Return: void
 * /
void print_alphabet(void)
{
	char c;
	char n1;

	c = 'a';
	n1 = '\n';
	while (c <= 'z')
		_putchar(c++);
	putchar(n1);
}
