#include "shell.h"

/**
 *  * main - Simple Shell 0.2
 *   *
 *    * Return: Always 0 (Success)
 *     */
int main(void)
{
	    char command[MAX_COMMAND_LENGTH];

	        signal(SIGINT, sigint_handler);

		    while (1)
			        {
					        display_prompt();
						        if (fgets(command, MAX_COMMAND_LENGTH, stdin) == NULL)
								        {
										            write(STDOUT_FILENO, "\nGoodbye! 🌟\n", 15);
											                break;
													        }

							        /* Remove the newline character at the end */
							        command[strlen(command) - 1] = '\0';

								        if (strcmp(command, "exit") == 0)
										        {
												            write(STDOUT_FILENO, "\nGoodbye! 🌟\n", 15);
													                break;
															        }

									        execute_command(command);
										    }

		        return 0;
}

