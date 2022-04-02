#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the copied string
 */
int _strcmp(char *s1, char *s2)
{
	int i, status, s1_len, s2_len, big_len, true_status;

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (s1_len >= s2_len)
	{
		big_len = s1_len;
	}
	else
	{
		big_len = s2_len;
	}
	for (i = 0; i < big_len; i++)
	{
		status = s1[i] - s2[i];
		if (status != 0)
		{
			true_status = status;
			break;
		}
		else
		{
			true_status = status;
		}
	}
	return (true_status);
}
