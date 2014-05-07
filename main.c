#include <stdio.h>
#include "queue_handler.c"

int main ()
{
	queue_struct fila;
	printf("\nFILA CRIADA: %d", create_queue(&fila));
	printf("\nADCIONAR NO 'C': %d", add_node_queue(&fila, 'C'));
	printf("\nADCIONAR NO 'C': %d", add_node_queue(&fila, 'A'));
	printf("\nADCIONAR NO 'C': %d", add_node_queue(&fila, 'V'));
	printf("\nADCIONAR NO 'C': %d", add_node_queue(&fila, 'A'));
	printf("\nADCIONAR NO 'C': %d", add_node_queue(&fila, 'L'));
	printf("\nADCIONAR NO 'C': %d", add_node_queue(&fila, 'O'));
        printf("\nFILA: ");
	print_all_node_queue(&fila);
        printf("\n");
	return 0;
}
