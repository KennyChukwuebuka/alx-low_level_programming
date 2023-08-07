#define _POSIX_C_SOURCE 200809L  

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

void exit_with_error(int code, const char *message, const char *arg) {
    dprintf(STDERR_FILENO, message, arg);
    exit(code);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        exit_with_error(97, "Usage: cp file_from file_to\n");
    }

    const char *file_from = argv[1];
    const char *file_to = argv[2];

    int fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        exit_with_error(98, "Error: Can't read from file %s\n", file_from);
    }

    int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd_to == -1) {
        close(fd_from);
        exit_with_error(99, "Error: Can't write to %s\n", file_to);
    }

    ssize_t nread;
    char buffer[1024];

    while ((nread = read(fd_from, buffer, sizeof(buffer))) > 0) {
        ssize_t nwritten = write(fd_to, buffer, nread);
        if (nwritten == -1 || nwritten != nread) {
            close(fd_from);
            close(fd_to);
            exit_with_error(99, "Error: Can't write to %s\n", file_to);
        }
    }

    if (nread == -1) {
        close(fd_from);
        close(fd_to);
        exit_with_error(98, "Error: Can't read from file %s\n", file_from);
    }

    if (close(fd_from) == -1) {
        exit_with_error(100, "Error: Can't close fd %d\n", fd_from);
    }

    if (close(fd_to) == -1) {
        exit_with_error(100, "Error: Can't close fd %d\n", fd_to);
    }

    return 0;
}

