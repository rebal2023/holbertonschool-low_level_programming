#include "lists.h"
/**
* sum_dlistint - returns the sum of all the data (n) of a dlistint_t
* @head: head of the list
* Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *temp = head;

if (head == NULL)
return (0);
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
