#define TRUE 1
#define FALSE 0

#include <stdlib.h>


struct node
{
	char node_value; //to be changed to process type
	struct node *next;
};


typedef struct
{
	int initialized;
	struct node *begin;
	struct node *end;
} queue_struct;

int create_queue(queue_struct *queue);
int add_node_queue(queue_struct *queue, char a_Node);
int remove_node_queue(queue_struct *queue, char *r_node);
int shift_node_queue(queue_struct *queue_remove, queue_struct *queue_add);
void print_all_node_queue(queue_struct *queue);
long size_queue(queue_struct *queue);


