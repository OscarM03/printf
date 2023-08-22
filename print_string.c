#include "main.h"
/**
 * print_string - print a string
 * @str: a pointer to a string
 * Return: the len of the string
 */
int print_string(char *str)
{
	int len = 0;

	int j;
	char *s;

	if (str == NULL)
	{
		s = ("(null)");
		for (j = 0; s[j] != '\0'; j++)
		{
			_putchar(s[j]);
		}
		return (6);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
		len++;
	}
	return (len);
}
