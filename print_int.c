#include "main.h"
/**
  * print_int - print an int
  * @n: int
  * Return: len
  */
int print_int(int n)
{
	int num_helper, i, len = 0, num_negative = 0;
	char *arr;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
		num_negative = 1;
		n = -n;
	}
	num_helper = n;
	while (num_helper != 0)
	{
		num_helper = num_helper / 10;
		len++;
	}
	arr = (char *)malloc(sizeof(char) * (len + 1));
	if (arr == NULL)
	{
		return (-1);
	}
	for (i = len - 1; i >= 0; i--)
	{
		arr[i] = (n % 10) + '0';
		n = n / 10;
	}
	arr[len] = '\0';
	if (num_negative)
	{
		_putchar('-');
	}
	for (i = 0; i < len; i++)
	{
		_putchar(arr[i]);
	}
	free(arr);
	return (len + num_negative);
}
