#include <stdio.h>

int main() {
    int i = 0;
    while (i < 10); { // Logical error: semicolon ends the while loop prematurely
        printf("i = %d\n", i);
        i++;
    }
    return 0;
}

