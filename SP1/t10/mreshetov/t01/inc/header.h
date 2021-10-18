#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

typedef struct s_agent
{
    char * name;
    int power;
    int strength;
}   t_agent;

void mx_printerr(const char *s);
int mx_strlen(const char *s);
void mx_printchar(char c);

