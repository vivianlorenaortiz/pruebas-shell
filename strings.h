#include "shell.h"

/**
 * print_str - Prints a String as a system call.
 * @str: Pointer that holds the String that is printed.
 * Return: Nothing
 */
void print_str(char *str)
{
  int _strlen();
  write(STDOUT_FILENO, str, _strlen(str));
}

/**
 * _strlen - Finds the length of a string
 * @s: The pointer from which the length of the string is found.
 *
 * Return: Nothing
 */

int _strlen(char *s)
{
  int i;
  for (i = 0; s[i] != 0; i++)
  {

  }
  return (i);
}
