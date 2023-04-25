#include "main.h"

/**
 * put_s - A function that prints a string to the standard output
 * @string: A pointer to a string parameter
 * Return: The value of the string passed into it
 */

int put_s(char *string)
{
	int idx = 0, r_val = 0;

	if (string)
	{
		while (string[idx] != '\0')
		{
			_putchar(string[idx]);
			r_val += 1;
			idx++;
		}
	}
	return (r_val);
}
