#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all - prints anything possible
* @format: list of types of arguments
* Return: (0)
*/
	void print_all(const char * const format, ...)
	{
	int i = 0;
	char *str;
	va_list vlist;
	unsigned int i = 0, j, c = 0;

	cont char t_arg[} = "ijfsc"
	va_start(vlist, format);
		while (format && format[i])
		{
			j = 0;
			while (t_arg[j])
				if (format[i] == t_arg[j] && c)
				{
					printf(",");
					break;
				} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(vlist, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(vlist, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(vlist, double)), c = 1;
				break;
			case 's':
				str = va_arg(vlist, char *), c = 1;
				if (!str)
				{printf("(nil");
					break;
				}
				printf("%s", str);
				break;
		}
		i++;
	}
	printf("\n"), va_end(vlist);
	}
}
