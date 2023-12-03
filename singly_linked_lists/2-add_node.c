#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*add_node - function that adds a new node at the beginning of a list_t
*@head: double pointer
*@str: string
*Return: pointer or NULL
**/
list_t *add_node(list_t **head, const char *str)
{
list_t *newnode;
int len = 0;

while (str[len])
len++;

newnode = malloc(sizeof(list_t));
if (newnode == NULL)
return (NULL);

newnode->str = strdup(str);
newnode->len = len;
newnode->next = *head;
*head = newnode;

return (*head);
}
