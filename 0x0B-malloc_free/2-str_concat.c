#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concat two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concar str
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, k = 0;
	int count = 0, count_s1 = 0, count_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		count_s1++;
	for (j = 0; s2[j]; j++)
		count_s2++;
	count = count_s1 + count_s2 + 1;
	ptr =  malloc(sizeof(char) * count);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	for (i = 0; i <= count_s1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = count_s1; i < count; i++)
	{
		ptr[i] = s2[k];
		k++;
	}
	ptr[i] = '\0';
	return (ptr);
	free(ptr);
}
