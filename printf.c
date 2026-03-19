#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...)
{

va_list args;
unsigned int letter = 0;
char *s, c;

if(format == NULL)
{
return (-1);
}

va_start(args, format);

while(*format != '\0')
{

if (*format == '%' && *(format + 1) != '\0')
{

format++;

if (*format == 'c')
{
c = va_arg(args, int);
letter += write(1, &c, 1);
} 
else if (*format == 's')
{
s = va_arg(args, char *);

if (!s)
{
s = "(null)";
}

while (*s != '\0')
{
letter += write(1, s, 1);
s++;
}
} 
else if (*format == '%')
{
letter += write (1, "%", 1);
}
else if (*format == 'd' || *format == 'i')
{
letter += printf_int(va_arg(args, int));
}


}
else
{
letter += write(1, format, 1);
}

format++;
}

va_end(args);
return (letter);
}