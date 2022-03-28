#include "main.h"

/**
 * _memcpy - copy from src to dest
 *
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of times
 *
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(src + i) = *(dest + i);
		i++;
	}
	return (dest);
}
