#include <unistd.h>

// Definition of the _putchar function
int _putchar(char c) {
    return write(1, &c, 1);  // Write the character to standard output
}

