#include "main.h"

int main()
{
    
        char *path, *command, *lineptr, *token;
        size_t i;

        _getline(&lineptr, &i,stdin);

        token = _strtok(lineptr," \0");
        printf("===>[%s]\n",token);
        command = "mkdir\0";
      printf("--------------------------------------\n");
      path =  _which(environ,command); 

         printf("%s\n", path);
      _free(path);

    return 0;
}