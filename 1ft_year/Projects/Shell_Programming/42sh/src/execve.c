/*
** EPITECH PROJECT, 2019
** PSU_42sh_2018
** File description:
** execve.c
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "mysh.h"
#include "myprintf.h"

int check_file(data_t *info)
{
    struct stat sb;
    int tmp = stat(&info->cmd[0][2], &sb);

    if (tmp == -1 && my_strlen(info->cmd[0]) > 2)
        return 1;
    if (S_ISDIR(sb.st_mode)) {
        my_printf("%s: Permission denied.\n", info->cmd[0]);
        return 2;
    }
    return 0;
}

char *get_filename(data_t *info)
{
    int fd = 0;
    int tmp = 0;
    char *filename = NULL;

    if (info->cmd[0][0] != '.')
        filename = my_strdup(my_strcat("/bin/", info->cmd[0]));
    else if (info->cmd[0][1] == '/') {
        tmp = check_file(info);
        if (tmp == 1)
            return NULL;
        else if (tmp == 2)
            return my_strdup("\0");
        return (info->cmd[0]);
    }
    else
        return (NULL);
    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        filename = my_strcat("/usr/bin/", info->cmd[0]);
        fd = open(filename, O_RDONLY);
        if (fd == -1)
            return (NULL);
    }
    return (filename);
}

void check_segfault(pid_t pid)
{
    int ret = WTERMSIG(pid);

    switch (ret) {
    case 11:
        write(2, "Segmentation Fault", 18);
        break;
    case 8:
        write(2, "Floating point exception", 24);
        break;
    case 6:
        write(2, "Aborted", 7);
        break;
    default:
        break;
    }
    if (WCOREDUMP(pid))
        write(2, " (Core Dumped)\n", 15);
    else
        write(2, "\n", 1);
    return ;
}

void my_execve(data_t *info)
{
    pid_t pid;
    char *filename = get_filename(info);

    if (filename == NULL) {
        ret_val = 1;
        my_printf("%s: Command not found.\n", info->cmd[0]);
        return ;
    } else if (filename[0] == 0)
        return ;
    pid = fork();
    if (pid == -1)
        exit(1);
    else if (pid == 0)
        execve(filename, info->cmd, info->env);
    else
        wait(&pid);
    ret_val = WEXITSTATUS(pid);
    check_segfault(pid);
    kill(pid, 0);
    return ;
}
