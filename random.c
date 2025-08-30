

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

char* rand_string(size_t len) {

    char *s = malloc((len + 1) * sizeof(char));
    if(s == NULL) {
        printf("Memory Not Available");
        return NULL;
    }

    for (int i = 0; i < len; i++) {
        s[i] = 'a' + (rand() % 26);
    }

    s[len] = '\0';
    return s;
}

