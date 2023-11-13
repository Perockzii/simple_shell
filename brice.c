#include "shell.h"

/**
 * main - function to display prompt
 * Return: 0 on success
 */

int main(void)
{
	char prompt[130];

	while (true)
	{
		prompt_display();
		read_prompt(prompt, sizeof(prompt));
		execute_prompt(prompt);
	}
	return (0);
}
