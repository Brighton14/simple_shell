#ifndef SHELL_H
#define SHELL_H

extern char **environ;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
void print_envn(void);
int strn_cmp(char *s1, char *s2);
char **parse_input_strn(char *buffer);
char *path_srch(char *cmd);
char *strn_cat(char *dest, char *src, int n);
int strn_lgth(char *pointer);
char *strn_cat(char *dest, char *src);
char *str_char(char *s, char c);

#endif
