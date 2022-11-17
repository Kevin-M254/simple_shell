#include "shell.h"

/**
 * put_char - writes char c to stdout
 * @c: char to print
 *
 * Return: 1 on success, -1 if fail.
 */
int put_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints an input string
 * @str: string to print
 *
 * Return: Nothing.
 */
void _puts(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * place - writes a string
 * @str: pointer to the string
 *
 * Return: Nothing.
 */
void place(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
}

/**
 * controlC - stops the shell
 * @sig: keep shell running
 *
 * Return: Nothing.
 */
void controlC(int sig)
{
	(void) sig;
	write(1, "\n$", 3);
}
