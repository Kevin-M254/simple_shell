#include <stdio.h>
#include <unistd.h>

/**
 * main - gets pid
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("%u\n", my_pid);
	my_pid = getppid();
	printf("%u", my_pid);
	return (0);
}
