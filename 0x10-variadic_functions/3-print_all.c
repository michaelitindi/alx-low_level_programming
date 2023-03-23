#include <stdarg.h>
#include <stdio.h>
#include <string.h>

void print_all(const char * const format, ...)
{
char c;
int i;
double d;
 char *s;
va_list args;
va_start(args, format);
char format_copy[strlen(format) + 1];
strcpy(format_copy, format);

char *p = format_copy;
while (*p != '\0') {
if (*p == 'c') {
            c = va_arg(args, int);
            printf("%c", c);
        } else if (*p == 'i') {
            i = va_arg(args, int);
            printf("%d", i);
        } else if (*p == 'f') {
            d = va_arg(args, double);
            printf("%f", d);
        } else if (*p == 's') {
            s = va_arg(args, char *);
            if (s == NULL) {
                printf("(nil)");
            } else {
                printf("%s", s);
            }
        }
        p++;
        if (*p != '\0' && (*p == 'c' || *p == 'i' || *p == 'f' || *p == 's')) {
            printf(", ");
        }
    }
    va_end(args);
    printf("\n");
}
