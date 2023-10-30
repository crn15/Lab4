#include <stdio.h>
#include <stdlib.h>

// Función para agregar un nodo al inicio de la lista
void prependNode(struct Node** head, int value) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
newNode->next = *head;
*head = newNode; // El nuevo nodo se convierte en la nueva cabeza de la lista.
}

