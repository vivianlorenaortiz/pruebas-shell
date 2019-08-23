#include "shell.h"
#include <stdio.h>
#include <string.h>

/**
 * loop_cmd - Interprets the command line.
 * Return: Nothing
**/

void loop_cmd(void)
{
  char *line;
  char **args;
  int status;

do{
	printf("$ ");
	line = read_line();
	args = parse_line(line);
	status = execve(args[0], args, NULL);

	free(line);
	free(args);
}while (status);
}

/**
 * main - Calls loop function and if succeeds it returns an EXIT_SUCCESS
 * @ac: Argument Count
 * @av: Argument Vector
 * Return: EXIT_SUCCESS if request is successful
**/
int main(int ac, char **av)
{
	loop_cmd();
	return EXIT_SUCCESS;
}
