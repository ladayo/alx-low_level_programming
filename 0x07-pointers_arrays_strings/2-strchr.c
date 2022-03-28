#include "main.h"
#include <stddef.h>

/**
 * _strchr - character in a string
 *
 * @s: string pointer
 * @c: search character
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
		return (s);

	return (NULL);
}
