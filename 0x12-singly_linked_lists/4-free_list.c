#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list
 * @head: linked list
 * Return: Freedom!
 */

void free_list(list_t *head)
{
	list_t *tmp;
	list_t *nxt;

	tmp = head;

	while (tmp != NULL)
	{
		nxt = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = nxt;
	}
}
