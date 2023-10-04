#include "main.h"
/**
 *_memcpy - Copy a memory area
 *@dest: pointer to destination memory location
 *@src: Pointer to source memory location
 *@n: number of bytes to copy
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int l  = 0;
	int i = n;

	for (; l < i; l++)
	{
		dest[l] = src[l];
		n--;
	}
	return (dest);
}
