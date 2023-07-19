#include "cu.h"

int main(void) {
    char *str = fmtstr("Hello %s!! Num: %d", "World", 3);
    puts(str);
    free(str);

    return EXIT_SUCCESS;
}
