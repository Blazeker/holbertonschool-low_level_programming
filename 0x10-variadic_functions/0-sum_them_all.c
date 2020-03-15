#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
        va_list valist;
        int s = 0;
        unsigned int i = 0;

        va_start(valist, n);

        for(i = 0; i < n; i++)
        {
                s += va_arg(valist, int);
        }

        va_end(valist);

        return (s);
}