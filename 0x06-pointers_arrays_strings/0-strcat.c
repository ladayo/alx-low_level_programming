#include "main.h"
#include <string.h>

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
	int i = 0;
	int count_item = strlen(src);
	int last_item = strlen(dest);

	/**
	 * while (*dest != '\0'
	 * {
	 * count_item++;
	 * dest++;
	 * }
	 * count_item++;
	 * while (*src != '\0')
	 * {
	 * dest[count_item] = src[n];
	 * n++;
	 * src++;
	 * count_item++;
	 * }
	 * count_item++;
	 * dest[count_item] = '\0';
	 */

	for (i = 0; i < count_item; i++)
	{
		dest[last_item] = src[i];
		last_item++;
	}
	return (dest);
}
