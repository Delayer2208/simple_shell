#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_ALIASES 100

typedef struct {
	    char *name;
	        char *value;
} Alias;

extern Alias aliases[MAX_ALIASES];

void execute_command(char *command);
void sigint_handler(int signo);
void display_aliases(void);
void set_alias(char *name, char *value);
char *get_alias_value(char *name);

#endif /* SHELL_H */

