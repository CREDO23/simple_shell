#include "main.h"

char *_which(char **environ, char *command)
{
    int i;
    char *token, *env, *path, *cmd;
    struct stat st;

    for (i = 0; environ[i] != NULL; i++)
    {
        if (_ispath(environ[i], "PATH"))
        {
            env = environ[i];
        }
    }

    cmd = malloc(sizeof(char) * 25);
    if (command == NULL)
        return (NULL);

    path = malloc(sizeof(char) * 1024);
    if (path == NULL)
        return (NULL);

    cmd[0] = '/';
    cmd = _strcat(cmd, command);

    env[_strlen(env)] = '\0';

    token = _strtok(env, "=\0");
    _free(token);
    token = _strtok(env, ":\0");

    while (token)
    {
        token = _strcat(token, cmd);
        if (stat(token, &st) == 0)
        {
            path = _strcpy(token, path);
        }
        _free(token);
        token = _strtok(env, ":\0");
    }
    _free(token);
    _free(cmd);
    return path;
}