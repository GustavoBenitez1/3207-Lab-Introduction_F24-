// random.c

#include "random.h"
#include <stdlib.h>

// Function to return a random character between 'A' and 'Z'
char randchar() {
    return 'A' + (rand() % 26);
}
