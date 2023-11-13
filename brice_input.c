#include "shell.h"

/**
 * read_prompt - function to receive user inputs
 * @prompt: pointer to the function
 * @size: size of string
 */

void read_prompt(char *prompt, size_t size)
{
	if (fgets(prompt, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			brice_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			brice_print("Error reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	prompt[strcspn(prompt, "\n")] = '\0';
}
