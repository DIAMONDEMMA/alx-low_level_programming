#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string in which to check for neddle
 * @needle: substring to find in haystack
 *
 * Return: pointer to beginning of needle in haystack or NULL if no match
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}
	return (0);
}
