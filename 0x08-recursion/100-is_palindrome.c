#include "main.h"
/**
 * _length - checks the length of a string
 * @s: this is the string
 * Return: returns the length of the string
 */

int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
 * checkp - The checks if the string is palindrome
 * @lg: This is the length of the string
 * @s: This is the string
 * @i: this is the index
 * Return: 1 if it is palindorome or 0 if not
 */

int checkp(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (checkp(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - This checks if a string is a palindrome
 * @s: is the string
 * Return: return 1 if the string is a palindrome or 0 otherwise
 */

int is_palindrome(char *s)
{
	return (checkp(0, _length(s) - 1, s));
}

