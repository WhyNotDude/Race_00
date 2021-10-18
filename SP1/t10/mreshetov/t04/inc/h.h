#ifndef H_H
#define H_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdbool.h>

int main(int argc, char *argv[]);
int mx_file_len(const char *file);
char *mx_strnew(const int size);
int mx_count_words(const char *str);
int mx_count_lines(const char *str);
int mx_count_characters(const char* s);
void mx_printchar(char c);
void mx_printint(int num);
void mx_printstr(const char *s);
int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);
bool mx_isspace(char c);

#endif
