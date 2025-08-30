


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

char* rand_string(char *s, size_t len) {

    for (int i = 0; i < len; i++) {
        s[i] = 'a' + (rand() % 26);
    }

    s[len] = '\0';
    return s;
}
