#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <unistd.h>

extern char **environ;

int _strlen(char *str);
char *_strdup(char *str);
int _atoi(char *str);
void _free(void *ptr);
void *_ralloc(void *ptr, unsigned int old_size, unsigned int new_size);
void _memcpy(void *src, const void *dst, unsigned int size);
char *_strcat(char *str1, char *str2);
int _strcmp(char *str1, char *str2);
char *_strtok(char *str, char *del);
size_t _getline(char **lineptr, size_t *n, FILE *stream);
int _ispath(char *path, char *pathname);
char *_strcpy(char *src, char *dest);
int _fexec(char *path, char *arg[], char **env);
char *_which(char **environ , char *command);

#endif