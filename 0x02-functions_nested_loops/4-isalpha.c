#include "main.h"

/**
 * main - checks for alphabetic character
 * @c: input character
 * Return: 1 for alphabetic character and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
