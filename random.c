

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* rand_string(size_t len) {

    char *s = malloc((len + 1) * sizeof(char));
    if(s == NULL) {
        printf("Memory Not Available");
        return NULL;
    }
}

