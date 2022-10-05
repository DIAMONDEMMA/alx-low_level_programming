#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array
 * @size: size of array
 * @c: char to assign
 *
 * Return: pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(char) * size);

	/* check if malloc was successful */

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);
}
	
