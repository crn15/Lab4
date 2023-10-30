#include <stdio.h>
#include <stdlib.h>

// Función para buscar un nodo por valor e imprimir si existe o no
void searchNode(struct Node* head, int value) {
struct Node* current = head;
while (current != NULL) {
if (current->data == value) {
printf("El valor %d existe en la lista.\n", value);
return;
}
current = current->next;
}
printf("El valor %d no existe en la lista.\n", value);
}

