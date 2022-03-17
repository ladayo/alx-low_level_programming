#include <unistd.h>
#include "main.h"
#include <ctype.h>

/**
* _isdigit -  outputs if it is a digit
* @c: parameter c is the character
*
* Return: Always 0 (Success)
*
*/

int _isdigit(int c)
{
	if (isdigit(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

