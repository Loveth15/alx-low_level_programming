#include <stdlib.h>
#include "lists.h"

/**
 * list_len - This program returns the number of elements in a linked list
 * @head: pointer to the list_t list
 * Return: number of elements in the list
*/

size_t list_len(const list_t *head)
{
    size_t element_count = 0;

    while (head)
    {
        element_count++;
        head = head->next;
    }

    return element_count;
}

