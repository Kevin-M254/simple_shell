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
	int i = 0;

	for (; (*s2 != '\0' && *s1 != '\0') && *s1 == *s2; s1++)
	{
		if (i == 3)
			break;
		i++;
		s2++;
	}

	return (*s1 - *s2);
}

/**
 * _strlen - finds length of string
 * @str: string
 *
 * Return: int length of str.
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}

/**
 * _strcat - concatenates string
 * @s1: first string
 * @s2: second string
 *
 * Return: Concatenated string.
 */
char *_strcat(char *s1, char *s2)
{
	char *str;
	int len1, len2, j, i, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);

	len2 = _strlen(s2);

	str = malloc(((len1) + (len2) + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (j = 0; j < len1; j++)
	{
		str[j] = s1[j];
	}

	for (i = len1, k = 0; k <= len2; i++, k++)
	{
		str[i] = s2[k];
	}

	return (str);
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
