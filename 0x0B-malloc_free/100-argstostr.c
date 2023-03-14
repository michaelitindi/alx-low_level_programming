#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates arguments
 * @ac: integer
 * @av: character
 *
 * Return: Pointer
 */

char *argstostr(int ac, char **av)
{
int i, j, len;
char *str;

if (ac == 0 || av == NULL)
{
return (NULL);
}
len = 0;
for (i = 0; i < ac; i++)
{
len += strlen(av[i]) + 1;
}
str = malloc((sizeof(char) * len)+1);
if (str == NULL)
{
return (NULL);
}
len = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[len++] = av[i][j];
}
str[len++] = '\n';
}
str[len] = '\0';
return (str);
}
