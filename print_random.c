#include <stdio.h>
#include <time.h>

#include "random.c"

void rand_string(char * s, size_t size) {
    for (size_t i = 0; i < size; i++) {
        s[i] = randchar();
    }
    s[size] = '\0';
}

//Given Project code
char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size);
     }
     return s;
}

int main() {
    srand(time(NULL));


    char *random_word = rand_string_alloc(7);

    if (random_word) {
        printf("Generated random word: %s\n", random_word);
        free(random_word);
        return 0;
    }
}