#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>

void brice_print(const char *feedback);
int main(void);
void brice_print(const char *feedback);
void prompt_display(void);
void read_prompt(char *prompt, size_t size);
void execute_prompt(const char *prompt);
void exec_prompt(const char *prompt, char *const args[]);

#endif

