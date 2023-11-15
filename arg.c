#include "shell.h"

/**
 * exec_prompt - function that executes a command with arguments
 * @prompt: pointer to the command
 * @args: array of strings that represents arguments
 * Return: void
 */

void exec_prompt(const char *prompt, char *const args[])
{
	pid_t infant_pid = fork();

	if (infant_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (infant_pid == 0)
	{
		if (execve(prompt, args, NULL) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}
}
