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
