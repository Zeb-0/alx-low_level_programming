#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: occurrence of bytes
 * @accept: the string to be checked
 * Return: pointer to @s matching bytes in accept else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[i] == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
