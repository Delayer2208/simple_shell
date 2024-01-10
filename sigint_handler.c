#include "shell.h"

/**
 *  * sigint_handler - Ignore SIGINT (Ctrl+C) in the shell
 *   * @signum: Signal number
 *    */
void sigint_handler(int signum)
{
	    (void)signum;
	        write(STDOUT_FILENO, "\n#cisfun$ ", 10);
}

