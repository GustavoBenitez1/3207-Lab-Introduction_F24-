//
// Created by guso9 on 8/28/2024.
//random.c
#include <stdlib.h>

char randchar(void) {
    return (rand() % 26) + 'a';
}
