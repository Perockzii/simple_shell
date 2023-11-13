#include "shell.h"

/**
 * brice_print - function to print my strings
 * @feedback: pointer to the function
 */

void brice_print(const char *feedback)
{
	write(STDOUT_FILENO, feedback, strlen(feedback));
}
