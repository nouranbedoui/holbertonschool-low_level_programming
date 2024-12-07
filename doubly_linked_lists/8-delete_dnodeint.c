#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - check the code
 * @head: list_t
 * @index: int
 * Return: Always 0.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *select = *head;
unsigned int count = 0;

if (!*head)
{
free(select);
return (-1);
}
while (count != index)
{
select = select->next;
if (select == NULL)
return (-1);
count++;
}
if (select->prev == NULL && select->next != NULL)
{
select->next->prev = NULL;
*head = select->next;
free(select);
return (1);
}
if (select->prev == NULL && select->next == NULL)
{
free(select);
return (1);
}
if (select->prev != NULL && select->next != NULL)
{
select->prev->next = select->next;
select->next->prev = select->prev;
}
if (select->prev != NULL && select->next == NULL)
select->prev->next = NULL;
free(select);
return (1);
}
