#include "main.h"

/**
 * _strcat - concat two strings
 *
 * @dest: first string
 * @src: second string
 *
 * Return: the concat string
 */

char *_strcat(char *dest, char *src)
{
	int n = 0;
	int count_item = 0;

	while (*dest != '\0')
	{
		count_item++;
		dest++;
	}
	count_item++;

	while (*src != '\0')
	{
		dest[count_item] = src[n];
		n++;
		src++;
		count_item++;

	}
	count_item++;
	dest[count_item] = '\0';

	return (dest);
}
