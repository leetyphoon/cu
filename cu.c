#include "cu.h"

char *fmtstr(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int size = vsnprintf(NULL, 0, format, args);
    char *buf = malloc(size + 1);
    if (buf == NULL) {
        return NULL;
    }

    va_start(args, format);
    vsnprintf(buf, size + 1, format, args);

    va_end(args);
    return buf;
}

char **lstnew(size_t size)
{
	char **list = (char **)malloc(sizeof(char *) * size + 1);
	list[size] = NULL;
	return list;
}

char *lstget(char **list, size_t idx)
{
	return list[idx];
}

size_t lstset(char **list, size_t idx, char *val)
{
	list[idx] = strdup(val);
	return strlen(list[idx]);
}

size_t lstdel(char **list, size_t idx)
{
	size_t lastcnt = 0;
	while (NULL != list[lastcnt]) {
		lastcnt++;
	}

	free(list[idx]);
	list[idx] = NULL;

	if (idx != (lastcnt - 1)) {
		list[idx] = list[lastcnt - 1];
		list[lastcnt - 1] = NULL;
	}

	return --lastcnt;
}

void lstfree(char **list)
{
	for (size_t i=0; NULL!=list[i]; i++) {
		free(list[i]);
	}

	free(list);
}

void lstdump(char **list)
{
	for (size_t i=0; NULL!=list[i]; i++) {
		printf("list[%ld]: %s\n", i, list[i]);
	}
}
