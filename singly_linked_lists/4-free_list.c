#include <stdlib.h>
#include "lists.h"
/**
 * free_list - function that frees a list_t
 * @head: variable
 */
void free_list(list_t *head)
{
while (head == NULL)
return;
free_list(head->next);
free(head->str);
free(head);
}
