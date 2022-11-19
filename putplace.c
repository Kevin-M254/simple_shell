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

/**
 * _putchar - writes the the char c to stdout
 * @c: the char to print
 *
 * Return: 1 on success, -1 on fail.
 */
int _putchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
