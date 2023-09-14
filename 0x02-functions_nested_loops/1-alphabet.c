#include "main.h"

/**
 * print_alphabet - Print alphabet a-z and assign newline.
 *Return void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
