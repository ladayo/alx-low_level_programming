#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* _isalpha -  outputs if it is alphabet
* @c: parameter c is the character
*
* Return: Always 0 (Success)
*
*/

int _isalpha(int c)
{
	char ch = c;

	if (isalpha(ch) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
