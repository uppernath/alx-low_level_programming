#include "main.h"

/**
 *
 *_isupper - function that checks for uppercase characters
 *@c: the ASCII equivalent of the character
 *Return: 1 if uppercase, else 0
 */
i
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
