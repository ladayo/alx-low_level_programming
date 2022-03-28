#include "main.h"

/**
 * _strspn - length of prefix substring
 *
 * @s: string pointer
 * @accept: search byte
 *
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, count = 0;

	while (*(accept + i) != '\0')
	{
		for (j = 0; *(s + j) != '\0'; j++)
		{
			if (*(accept + i) == *(s + j))
			{
				count++;
			}
		}
		accept++;
	}
	count--;
	count--;
	return (count);
}
