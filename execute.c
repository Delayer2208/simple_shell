#include "shell.h"

/**
 *  * execute_command - Execute the given command with arguments
 *   * @command: The command to execute
 *    */
void execute_command(char *command)
{
	    char *token, *args[MAX_ARGUMENTS];
	        int i = 0;

		    /* Tokenize the command and store arguments in an array */
		    token = strtok(command, " ");
		        while (token != NULL)
				    {
					            args[i++] = token;
						            token = strtok(NULL, " ");
							        }
			    args[i] = NULL;

			        if (fork() == 0)
					    {
						            /* Child process */
						            if (execve(args[0], args, environ) == -1)
								            {
										                perror(args[0]);
												            exit(EXIT_FAILURE);
													            }
							        }
				    /* Parent process */
				    wait(NULL);
}

