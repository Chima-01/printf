#include "main.h"

/**
 * _putchar - A fuction that returns a character to the standard output
 * @z: A character constant parameter.
 * Return: The character constant to the standard output
 */

int _putchar(char z)
{
	return (write(1, &z, 1));
}
