#include <stdio.h>
#include "lists.h"
/**
*print_list - function that prints all the elements of a list_t
*@h: pointer to the list_t
*Return: nb of nodes
*/
size_t print_list(const list_t *h)
{
size_t nodes = 0;

while (h != 0)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);

h = h->next;
nodes++;
}
return (nodes);
}
