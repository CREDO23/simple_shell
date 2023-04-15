#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

#define BUFSIZE 1024




char *_strdup(char *s);
size_t _writer(char **str, int fd);
int _strlen (char *str);
char *_fexec(char *str);
int _atoi(char *s);
#endif
