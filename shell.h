#ifndef HEADER_FILE_SHELL
#define HEADER_FILE_SHELL
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <string.h>
#include <errno.h>
#include <stddef.h>
#define BUFFER_SIZE 1024
#define PROMPT "$cisfun#"
#define DELIMITERS_PARSE " \t\n\r\a"
/* Shell Basic Interpretation */
void loop_cmd(void);
int my_getline(char *lineptr, int buf_size);
char *read_line(void);
char **parse_line(char *lineptr);
/* String Manipulation */
void print_str(char *str);
int _strlen(char *s);
#endif
