#include <stdio.h>
#include <stdlib.h>

// Función para buscar un nodo a partir de un indice.
void getNode(struct Node* head, int index) {

int count = 0;
struct Node* current = head;

//Este bucle busca el nodo en la lista.
while (current != NULL) {
if (count == index) {
printf("Elemento en el índice %d: %d\n", index, current->data);
return;
}
count++;
current = current->next;
}

printf("No existe un elemento en el índice %d.\n", index);
}

