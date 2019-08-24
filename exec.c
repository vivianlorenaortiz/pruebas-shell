#include "shell.h"

/**
 *
 *
 *
 */
int _exec( char **args)
{
	int i;
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
		for (i = 0; i < 64; i++)
		{
			free(args[i]);
		}
	
	}
	else
		perror("Error. ");

	return (0);
}
