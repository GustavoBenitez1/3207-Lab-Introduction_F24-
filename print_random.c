// main.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "random.h"  // Include the header file for randchar()

void rand_string(char *s, size_t size) {
    for (size_t i = 0; i < size; i++) {
        s[i] = randchar();  // Use the randchar function to generate a random character
    }
    s[size] = '\0';  // Null-terminate the string
}

char* rand_string_alloc(size_t size)
{
    char *s = malloc(size + 1);  // Allocate memory for the string plus null terminator
    if (s) {
        rand_string(s, size);  // Fill the string with random characters
    }
    return s;
}

int main() {
    // Initialize random number generator
    srand(time(NULL));

    // Generate a random 7-letter word
    char *random_word = rand_string_alloc(7);

    // Print the generated word
    if (random_word) {
        printf("Generated random word: %s\n", random_word);
        free(random_word);  // Free the allocated memory
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;
}
