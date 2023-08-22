#include "main.h"
/**
  * helper_printf - helps printf
  * @format_list: lists of format args
  * @format: format specifier
  * Return: len
  */
int helper_printf(va_list format_list, const char format)
{
	int len = 0;

	if (format == 'c')
	{
		len += print_char(va_arg(format_list, int));
	}
	else if (format == 's')
	{
		len += print_string(va_arg(format_list, char *));
	}
	else if (format == 'd')
	{
		len += print_int(va_arg(format_list, int));
	}
	else if (format == 'i')
	{
		len += print_int(va_arg(format_list, int));
	}
	else if (format == '%')
	{
		len += print_percent('%');
	}
	else
	{
		len += print_char('%');
		len += print_char(format);
	}
	return (len);
}
