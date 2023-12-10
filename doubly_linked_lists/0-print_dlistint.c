#include "lists.h"
/**
* print_dlistint - prints the elements of dlistint_t list
* @h: head of the list
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
int count;

count = 0;

if (h == NULL)
return (count);

while (h->pre != NULL)
h = h->pre;

while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->post;
}
return (count);
}
