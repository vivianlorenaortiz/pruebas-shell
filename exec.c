#include "shell.h"

/**
 *
 *
 *
 */
int _exec( char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if(execve(args[0], args, NULL) == -1)
			perror( "Error: ");
		exit(1);
	}
	else if (pid > 0)
	{
		wait(&status);
	}
	else
		perror("Error. ");

	return (0);
}
