#include "main.h"

/**
 * _isdigit - checks within the digits 0 throgh 9
 * @c: integer  to be checked
 * Return: if integer is a digit return 1, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
