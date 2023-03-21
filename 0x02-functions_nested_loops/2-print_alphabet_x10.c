#include "main.h"

/**
 * print_alpahbet_x10 - prints 10 times the alphabet, in lowercase.
 *
 */
void print_alpahbet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
