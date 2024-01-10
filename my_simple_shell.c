#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
#include <string.h>

#define MAX_COMMAND_LENGTH 100

/**
 *  * sigint_handler - Ignore SIGINT (Ctrl+C) in the shell
 *   * @signum: Signal number
 *    */
void sigint_handler(int signum)
{
		(void)signum;
			write(STDOUT_FILENO, "\n#cisfun$ ", 10);
}

/**
 *  * execute_command - Execute the given command
 *   * @command: The command to execute
 *    */
void execute_command(char *command)
{
		char *args[2];

			args[0] = command;
				args[1] = NULL;

					if (fork() == 0)
							{
										/* Child process */
										if (execve(args[0], args, NULL) == -1)
													{
																	perror(command);
																				exit(EXIT_FAILURE);
																						}
											}
						/* Parent process */
						/* (Note: Removed the unused 'status' variable) */
}

/**
 *  * main - Simple and Unique Shell
 *   *
 *    * Return: Always 0 (Success)
 *     */
int main(void)
{
		char command[MAX_COMMAND_LENGTH];

			signal(SIGINT, sigint_handler);

				while (1)
						{
									printf("#cisfun$ ");
											fflush(stdout);

													if (fgets(command, MAX_COMMAND_LENGTH, stdin) == NULL)
																{
																				printf("\nGoodbye! 🌟\n");
																							break;
																									}

															/* Remove the newline character at the end */
															command[strlen(command) - 1] = '\0';

																	if (strcmp(command, "exit") == 0)
																				{
																								printf("\nGoodbye! 🌟\n");
																											break;
																													}

																			execute_command(command);
																				}

					return (0);
}

