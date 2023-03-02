#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*p)

	{
	*p = toupper(*p);
	p++;
	}
	return str;
}

int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return 0;
}
