#include "shell.h"

/**
 * slashChar - identifies if first char is a slash
 * @str: string
 *
 * Return: 1 if yes, 0 if no.
 */
int slashChar(char *str)
{
	int count = 0;

	while (str[count])
	{
		if (str[0] == '/')
		{
			printf("%c\n", str[0]);
			return (1);
		}

		count++;
	}

	return (0);
}

/**
 * compareExit - compares exit strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Integer value.
 */
int compareExit(char *s1, char *s2)
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
 * compareEnv - compares evirons
 * @s1: first string
 * @s2: second string
 *
 * Return: Integer value.
 */
int compareEnv(char *s1, char *s2)
{
	int i = 0;

	for (; (*s2 != '\0' && *s1 != '\0') && *s1 == *s2; s1++)
	{
		if (i == 2)
			break;
		i++;
		s2++;
	}

	return (*s1 - *s2);
}

/**
 * **get_string - identifies input from keyboard
 * @param: call prompt from prompt()
 *
 * Return: String.
 */
char **get_string(char *param)
{
	char **buf = malloc(1024 * sizeof(char *));
	char *split;
	int i = 0;
	char *delim = " \t\n";

	split = strtok(param, delim);
	while (split != NULL)
	{
		buf[i] = split;
		i++;
		split = strtok(NULL, delim);
	}
	run_cmd(buf);

	return (buf);
}
