#include <stdio.h>
#include "lists.h"
/**
* list_len - function that returns the number of elements in a linked list_t
* @h: pointer to the list_t
* Return: nb of elements
*/
size_t list_len(const list_t *h)
{
size_t nodes = 0;

while (h != 0)
{
nodes++;
h = h->next;
}
return (nodes);
}
