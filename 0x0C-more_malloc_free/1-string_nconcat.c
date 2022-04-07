#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concat two strings
 *
 * @s1: first char
 * @s2: second char
 * @n: number of second char to concat
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, nstr;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	if (n >= j)
		n = j;
	nstr = i + n + 1; /*+1 for the null terminating character*/
	ptr = malloc(sizeof(char) * nstr);
	if (!ptr)
		return (NULL);
	for (i = 0; s1[i]; i++)
		*(ptr + i) = *(s1 + i);
	for (j = 0; j <= n; j++)
	{
		*(ptr + i) = *(s2 + j);
		i++;
	}
	*(ptr + nstr) = '\0';
	return (ptr);
}
