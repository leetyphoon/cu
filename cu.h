#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

char *fmtstr(const char *format, ...);
char **lstnew(size_t size);
char *lstget(char **list, size_t idx);
size_t lstset(char **list, size_t idx, char *val);
size_t lstdel(char **list, size_t idx);
void lstfree(char **list);
void lstdump(char **list);
