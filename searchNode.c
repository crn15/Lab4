#include <stdio.h>
#include <stdlib.h>
#include "declarations.h"

// Función para buscar un nodo por valor e imprimir si existe o no
void searchNode(struct Node* head, int value) {

struct Node* current = head;

//Bucle que busca el nodo.
while (current != NULL) {
if (current->data == value) {
printf("\nEl valor %d existe en la lista.\n", value);
return;
}
current = current->next;
}

printf("\nEl valor %d no existe en la lista.\n", value);
}

