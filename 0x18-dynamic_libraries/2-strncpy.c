#include "main.h"
#include <string.h>

/**
 * _strncpy - concat two strings
 *
 * @dest: first string
 * @src: second string
 * @n: size in byte
 *
 * Return: the concat string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;


	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
