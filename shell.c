#include "shell.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * loop_cmd - Interprets the command line.
 * Return: Nothing
**/
int loop_cmd(void)
{
  char *line;
  char **args;

  while (1)
  {
	  _puts("$ ");
	  line = read_line();
	  args = parse_line(line);
	  _exec(args);
	  free(line);
	  free(args);
  }
  return (0);
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
