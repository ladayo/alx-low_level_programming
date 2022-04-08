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
	unsigned int i, sizeS1, sizeS2, nstr;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (sizeS1 = 0; s1[sizeS1]; sizeS1++)
		;
	for (sizeS2 = 0; s2[sizeS2]; sizeS2++)
		;
	if (n >= sizeS2)
		n = sizeS2;
	nstr = sizeS1 + n + 1; /*+1 for the null terminating character*/
	ptr = malloc(sizeof(char) * nstr);
	if (!ptr)
		return (NULL);
	for (i = 0; i < sizeS1; i++)
		ptr[i] = s1[i];
	for (; i < (sizeS1 + n); i++)
	{
		ptr[i] = s2[i - sizeS1];
	}
	ptr[i] = '\0';
	return (ptr);
}
