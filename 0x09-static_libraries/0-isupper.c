#include "main.h"

/**
 * _isupper - function checks uppercase characters
 * @c: character to check
 *
 * Return: if char is uppercase return 1,if not return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
