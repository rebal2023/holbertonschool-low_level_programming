#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*add_node_end - function that adds a new node at the end of a list_t
*@head: double pointer
* @str: string
*Return: pointer or NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *temp;
int len = 0;

while (str[len])
len++;

new = (list_t *)malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
new->len = len;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
return (*head);
}
