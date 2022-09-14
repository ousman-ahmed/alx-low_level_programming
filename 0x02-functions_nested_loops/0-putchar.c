#include "main.h"

/**
* main - the entry function
* Return: 0 success
*/
int mai(void)
{
	char *s;
	int i;

	s = "_putchar\n";
	i = 0;
	while (s[i] != '\n')
		_puchar(s[i++]);
	_putchar('\n');
	return (0);
}
