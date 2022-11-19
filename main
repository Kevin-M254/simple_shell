#include "shell.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: array of args
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	signal(SIGINT, controlC);
	prompt();
	return (0);
}
