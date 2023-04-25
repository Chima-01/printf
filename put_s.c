#include "main.h"

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
