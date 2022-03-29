#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - first occurenc of byte
 *
 * @s: string pointer
 * @accept: search byte
 *
 * Return: int
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (&s[i]);
			}
		}
		s++;
	}
	return (NULL);
}
