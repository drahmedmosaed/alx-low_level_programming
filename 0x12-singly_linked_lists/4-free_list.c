#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list -memory allocated for a list
 * @head:pointer
 */
void free_list(list_t *head)
{
if (head)
{
free_list(head->next);
if (head->str)
free(head->str);
free(head);
}
}
