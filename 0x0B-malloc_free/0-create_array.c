#include "main.h"
#include <stdlib.h>
/**
 * create_array -Function create array of char and assign a specific char
 * @size: size of array
 * @c: char to assign
 * Description: It creates array of size size and assign char c
 * Return: pointer to array, and return  NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int counter;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (counter = 0; counter < size; counter++)
		str[counter] = c;
	return (str);
}
