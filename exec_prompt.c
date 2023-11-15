#include "shell.h"

/**
 * execute_prompt - a function that executes a command prompt
 * @prompt: pointer to the function
 * Return: NULL
 */

void execute_prompt(const char *prompt)
{
	pid_t infant_pid = fork();

	if (infant_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (infant_pid == 0)
	{
		char *args[] = {"/bin/ls", NULL};
		char *envp[] = {NULL};

		if (execve(prompt, args, envp) == -1)
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
