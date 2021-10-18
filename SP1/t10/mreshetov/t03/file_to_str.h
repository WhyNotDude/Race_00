#ifndef H_H
#define H_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char *mx_file_to_str(const char *filename);
int mx_strlen(const char *s);
char *mx_strcat(char *restrict s1, const char *restrict s2);
char *mx_strcpy(char *dst, const char *src);
char *mx_strjoin(const char *s1, const char *s2);
char *mx_strdup(const char *s1);
char *mx_strnew(const int size);

#endif
