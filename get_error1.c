#include "main.h"

/**
 * _error - calls the error function according to the builtin call
 * @data: data structure that contains arguments
 * @erval: error value
 * Return: The error
 */
int _error(data_t *data, int erval)
{
	char *err;

	switch (erval)
	{
	case -1:
		err = error_env(data);
		break;
	case 2:
		if (_strcmp("exit", data->args[0]) == 0)
			err = error_exit_shell(data);
		else if (_strcmp("cd", data->args[0]) == 0)
			err = error_get_cd(data);
		break;
	case 126:
		err = error_path_126(data);
		break;
	case 127:
		err = error_not_found(data);
		break;
	}

	if (err)
	{
		write(STDERR_FILENO, err, _strlen(err));
		free(err);
	}

	data->status = erval;
	return (erval);
}
