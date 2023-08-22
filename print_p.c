#include "main.h"
/**
  * _printf - duplicate of printf
  * @format: format string
  * @...: valiadic function
  * Return: len
  */
int _printf(const char *format, ...)
{
	int i, len = 0;
	va_list format_list;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(format_list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == ' ' || format[i] == '\0')
			{
				return (-1);
			}
			else
			{
				len += helper_printf(format_list, format[i]);
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
	}
	va_end(format_list);
	return (len);
}
