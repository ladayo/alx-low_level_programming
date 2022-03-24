#include "main.h"
#include <string.h>

/**
 * string_toupper - convert lower to upper
 *
 * @s: string parameter
 *
 * Return: characters
 */

char *string_toupper(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len && s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
