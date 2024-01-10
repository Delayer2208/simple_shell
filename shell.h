#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
#include <string.h>

#define MAX_COMMAND_LENGTH 100
#define MAX_ARGUMENTS 10

extern char **environ;  /* Declaration of environ variable */

void sigint_handler(int signum);
void execute_command(char *command);
void display_prompt(void);

#endif /* SHELL_H */

