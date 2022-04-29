#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned integer
 * @b: pointer to string of binary chars
 *
 * Return: unsigned integer value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int count;
	int i;
	unsigned int result = 0;
	unsigned int k = 1;

	if (!b)
		return (0);
	for (count = 0; b[count] != '\0'; count++)
		;
	for (i = count - 1; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			result += k;
		k *= 2;
	}
	return (result);

}
