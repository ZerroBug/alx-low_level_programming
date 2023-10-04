#include "main.h"
/**
 * _strncat - concatenate two strings
 * using not more than n bytes from src
 * @dest:  value inputed
 * @src: input value
 * @n:  value inputed
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int l;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	l = 0;
	while (l < n && src[l] != '\0')
	{
	dest[i] = src[l];
	k++;
	l++;
	}
	dest[k] = '\0';
	return (dest);
}
