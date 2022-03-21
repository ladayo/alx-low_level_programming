#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - print reversed string
 *
 * @s: input string
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	char temp;
	int i, left, right, len;

	len = strlen(s);
	left = 0;
	right = len - 1;
	for (i = left; i < right; i++)
	{
		temp = s[i];
		s[i] = s[right];
		s[right] = temp;
		right--;
	}
}
