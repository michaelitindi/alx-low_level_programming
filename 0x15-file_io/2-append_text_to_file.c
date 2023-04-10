#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text to eof
 * @filename: the filename
 * @text_content: the content of text
 * Return: 1 Success
 */


int append_text_to_file(const char *filename, char *text_content)
{
int f, w;
if (filename == NULL)
{
return (-1);
}
f = open(filename, O_WRONLY | O_APPEND);
if (f == -1)
{
return (-1);
}
if (text_content != NULL)
{
w = write(f, text_content, strlen(text_content));
if (w == -1)
{
close(f);
return (-1);
}
}
close(f);
return (1);
}
