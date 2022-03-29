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

	while (*(s + i) != '\0')
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
				break;
			}
		}
		if (*(accept + j) == '\0')
			break;
		s++;
	}
	return (count);
}
