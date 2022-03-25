#include "main.h"

/**
 * leet - encoding str
 *
 * @s: str
 *
 * Return: s
 */

char *leet(char *s)
{
	char *a  = "aAeEoOtTiL";
	char *b = "4433007711";
	int i, j;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; i < 10; i++)
		{
			if (s[j] == a[i])
			{
				s[j] = b[i];
			}
		}
	}
	return (s);
}
