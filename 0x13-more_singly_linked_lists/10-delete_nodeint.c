#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a specific index.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 if successful, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *temp, *to_delete;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return (-1);

    if (index == 0)
    {
        to_delete = *head;
        *head = (*head)->next;
        free(to_delete);
        return (1);
    }

    temp = *head;

    for (i = 0; temp != NULL && i < index - 1; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL)
        return (-1);

    to_delete = temp->next;
    temp->next = temp->next->next;
    free(to_delete);

    return (1);
}
