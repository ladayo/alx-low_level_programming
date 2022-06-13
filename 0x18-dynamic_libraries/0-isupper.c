#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* _isupper -  outputs if a char is lower case
* @c: parameter c is the character
*
* Return: Always 0 (Success)
*
*/

int _isupper(int c)
{
	char ch = c;

	if (isupper(ch) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
