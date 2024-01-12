#include "shell.h"

void sigint_handler(int signo) {
	    /* Handle SIGINT (Ctrl+C) */
	    printf("\nReceived SIGINT. Exiting...\n");
	        exit(signo);
}

