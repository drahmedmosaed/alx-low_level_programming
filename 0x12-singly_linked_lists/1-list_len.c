#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check the code of students.
 * @h:list name
 * Return:nodes numbers
 */
size_t list_len(const list_t *h)
{
int count = 0;

while (h)
{
count++;
h = h->next;
}
return (count);
}
