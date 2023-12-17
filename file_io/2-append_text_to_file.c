#include "main.h"
/**
* append_text_to_file - function that appends text at the end of a file
* @filename: name of the file
* @text_content: string to add at the end of the file 
* Return: 1 or-1
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, len, w;

if (filename == NULL)
return (-1);

fd = open(filename, O_APPEND | O_WRONLY);

if (fd == -1)
return (-1);

if (text_content == NULL)
{
close(fd);
return (1);
}
for (len = 0; text_content[len] != '\0'; len++)
;

w = write(fd, text_content, len);

if (w < 1)
return (-1);

close(fd);
return (1);
}
