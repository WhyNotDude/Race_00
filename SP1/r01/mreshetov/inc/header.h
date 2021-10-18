#pragma once

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int mx_strlen(const char *s);
void mx_printchar(char c);
bool mx_isdigit (int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);
void mx_printint(int n);
void mx_printstr(const char *s);
void mx_strdel(char **str);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str);
void mx_printerr(const char *s);
char *mx_strcat(char *s1, const char *s2);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
char *mx_strcpy(char *dst, const char *src);
void mx_strerrout(char *s1, char *s2);
double mx_pow(double n, unsigned int pow);
char *mx_strchr(const char *s, int c);
char *mx_strint(const char *s, int c, int *index);
void mx_print_rc(char *operation, char *operand1, char *operand2, char *result);
char *mx_itoa(long long number);
