#include "main.h"

int _fexec(char *path, char *arg[], char **env)
{
    int pid, err;

    pid = fork();

    if (pid < 0)
    {
        perror(path);
    }
    else if(pid == 0)
    {
       err =  execve(path, arg, env); 
    }
    else{
         wait(NULL);
    }
    
    printf("Finish execution\n");
    return err;
}