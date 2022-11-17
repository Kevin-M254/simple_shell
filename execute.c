#include "shell.h"

/**
 * run_cmd - executes command
 * @cmd: command to execute
 *
 * Return: Nothing.
 */
void run_cmd(char **cmd)
{
	char *param = (*(cmd + 1));
	char *s, *slash = "/";
	char *f;

	char *vartoprint = *cmd;
	char *argv[4];

	if ((access(cmd[0], F_OK) == 0))
	{
		argv[0] = cmd[0];
		argv[1] = param;
		argv[2] = ".";
		argv[3] = NULL;

		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Error");
		}
	}
	else
	{
		f = find_command(vartoprint);

		slash = str_concat(f, slash);

		s = str_concat(slash, *cmd);

		argv[0] = s;
		argv[1] = param;
		argv[2] = ".";
		argv[3] = NULL;

		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Error");
		}
	}
}
