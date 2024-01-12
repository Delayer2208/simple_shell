#include "shell.h"

/**
 *  * execute_command - Execute a shell command
 *   * @command: The command to be executed
 *    */
void execute_command(char *command) {
	    /* Check if the command is the "exit" built-in */
	    if (strcmp(command, "exit") == 0) {
		            exit(0);
			        }

	        /* Add your execution logic here */
	        /* ... */

	        /* For now, let's print the command as a placeholder */
	        printf("Executing: %s\n", command);
}

