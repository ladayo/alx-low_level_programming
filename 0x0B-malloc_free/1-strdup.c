#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a str and save in a pointer
 *
 * @str: given string
 *
 * Return: Pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int count = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		count++;
	}
	count++;
	ptr =  malloc(sizeof(char) * count);

	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	for (i = 0; str[i]; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
	free(ptr);
}
