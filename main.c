#include "shell.h"

int main(void) {
	    char command[100];

	        /* Install the signal handler for SIGINT */
	        signal(SIGINT, sigint_handler);

		    while (1) {
			            printf("#cisfun$ ");
				            if (fgets(command, sizeof(command), stdin) == NULL) {
						                printf("\n");
								            break; /* Exit on Ctrl+D (EOF) */
									            }

					            /* Remove newline character */
					            command[strcspn(command, "\n")] = '\0';

						            execute_command(command);
							        }

		        return 0;
}

