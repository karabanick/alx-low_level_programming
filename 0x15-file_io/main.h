#ifndef MAIN_H
#define MAIN_H

/** ======= header files =======*/
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>

/** ====Buffer size===== */
#define BUFF_SIZE 1024

/* =====function prototypes ===== */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* ======= helper functions =======*/
int _strlen(char *s);
void usage_and_exit();
void read_error(const char *filename);
void write_error(const char *filename);
void close_error(int fp);

#endif
