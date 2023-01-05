#include "main.h"

/**
 * str_len - checks the length of string
 * @s: string
 * Return: length of string
 */

int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + str_len(s + 1));
}

/**
 * check_palindrome - checks for palindrome
 * @s: string
 * @i: iterator
 * @len: length of string
 * Return: 1 if palindrome else 0
 */

int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
	{
		return (1);
	}
	if (s[i] == s[len - i - 1])
	{
		return (check_palindrome(s, len, i + 1));
	}
	return (0);
}

/**
 * is_palindrome - prints palindrome
 * @s: the string
 * Return: 1 if palindrome otherwise 0
 */

int is_palindrome(char *s)
{
	int i, len;

	i = 0;
	len = str_len(s);
	if (!*s)
	{
		return (1);
	}
	return (check_palindrome(s, len, i));
}
