#include "shell.h"

/**
 * _strcmp - compares strings to find dir
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Integer.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * _strlen - finds length of string
 * @s: string
 *
 * Return: int length of str.
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcat - concatenates string
 * @dest: first string
 * @src: second string
 *
 * Return: Concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}

/**
 * *starts_with - checks first character
 * @haystack: string to check
 * @needle: substring to find
 *
 *Return: address of next char or NULL if none.
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * *_strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: amount of bytes to be used
 *
 * Return: concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}
