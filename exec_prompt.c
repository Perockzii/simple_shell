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
		execlp(prompt, prompt, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
