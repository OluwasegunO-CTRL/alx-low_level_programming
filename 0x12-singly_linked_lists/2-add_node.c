#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node - add a new node at the beginning of `list_t` list
 * @head: double pointer to head
 * @str: string to be saved in new node, must be duplicated
 * Return: Address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newElement;
	int c;

	c = 0;
	newElement = malloc(sizeof(list_t));
	if (newElement == NULL)
		return (NULL);
	while (str[c] != '\0')
		c++;
	newElement->str = strdup(str);
	newElement->len = c;
	newElement->next = *head;
	*head = newElement;

	return (newElement);
}
