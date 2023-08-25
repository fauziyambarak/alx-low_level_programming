#include <unistd.h>

<<<<<<< HEAD
// Definition of the _putchar function
int _putchar(char c) {
    return write(1, &c, 1);  // Write the character to standard output
}

=======
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
>>>>>>> e0fb1bac923dd282dfc04a2098a8c1744d89cd84
