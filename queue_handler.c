#include "queue_handler.h"
#include <stdio.h>

int create_queue(queue_struct *queue)
{
	queue->initialized = TRUE;
	queue->begin = malloc(sizeof(struct node));
	if (queue->begin == NULL)
	{
		return FALSE;
	}
	queue->begin = queue->end;
	return TRUE;
}

int add_node_queue(queue_struct *queue, char a_Node)
{
	struct node *aux;
	if (queue->begin == NULL)
	{
		return FALSE;
	}
	if (queue->begin == queue->end && queue->begin->next != NULL)
	{
		aux = malloc(sizeof(struct node));
		aux->node_value = a_Node;
		queue->begin = aux;
		queue->end = aux;
		aux->next = NULL;
		return TRUE;
	}
	aux = malloc(sizeof(struct node));
	aux->node_value = a_Node;
	queue->end->next = aux;
	queue->end = aux;
	aux->next = NULL;
	return TRUE;
}

int remove_node_queue(queue_struct *queue, char *r_Node)
{
	struct node *aux;
	if (queue->begin == NULL)
	{
		return FALSE;
	}

	aux = queue->begin;
	r_Node = &aux->node_value;
	queue->begin = aux->next;
	free(aux);
	return TRUE;
}

int shift_node_queue(queue_struct *queue_remove, queue_struct *queue_add)
{
	char value='\0';

	if (queue_remove->begin == NULL || queue_add->begin == NULL)
	{
		return FALSE;
	}

	remove_node_queue(queue_remove, &value);
	add_node_queue(queue_add, value);
	return TRUE;
}

void print_all_node_queue(queue_struct *queue)
{
	struct node *aux;
	aux = queue->begin;
	do 
	{
		printf("%c - ", aux->node_value);
		aux = aux->next;
		
	} while (aux != NULL);
}

long size_queue(queue_struct *queue)
{
	struct node *aux;
	long size=0;
	aux = queue->begin;
	do 
	{
		size = size+1;
		aux = aux->next;
		
	} while (aux != NULL);
	return size;
}


