#include "main.h"
#include <string.h>

/**
 * _strncat - concat two strings
 *
 * @dest: first string
 * @src: second string
 * @n: size in byte
 *
 * Return: the concat string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int last_item = strlen(dest);


	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[last_item + i] = src[i];
	}
	/* dest[last_item + 1] = '\0' */

	return (dest);
}
