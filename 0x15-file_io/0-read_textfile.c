#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads a file and prints it to output
 * @filename: the filename
 * @letters: bo of letters it should read and print
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *tx;
char *b;
ssize_t r, w;
if (filename == NULL)
{
return (0);
}
tx = fopen(filename,"r");
if (tx == NULL)
{
return (0);
}
b = (char *) malloc(letters + 1);
if (b == NULL)
{
fclose(tx);
return (0);
}
r = fread(b, 1, letters, tx);
if (r < 0)
{
fclose(tx);
free(b);
return (0);
}

b[r] = '\0';

w = write(STDOUT_FILENO, b, r);
if (w < 0 || w != r)
{
fclose(tx);
free(b);
return (0);
}
fclose(tx);
free(b);
return (r);
}







