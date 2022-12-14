#include "main.h"

/**
 * _strchr - locates character in string
 * @c: character
 * @s: string
 * Return: pointer to @c if character found in @s, else return NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}

