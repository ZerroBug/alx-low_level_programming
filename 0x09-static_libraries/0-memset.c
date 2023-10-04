#include "main.h"
/**
 * _memset - fill a block of memory with a given  value
 * @s: starting address of the given memory to be filled
 * @b: therequired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int counter = 0;

	for (; n > 0; counter++)
	{
		s[counter] = b;
		n--;
	}
	return (s);
}
