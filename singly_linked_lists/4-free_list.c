#include "lists.h"

/**
*free_list - function that frees a single linked list
*@head: a pointer
*Return: value of temp
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
