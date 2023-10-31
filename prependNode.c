#include <stdio.h>
#include <stdlib.h>
#include "declarations.h"

// Función para agregar un nodo al inicio de la lista
void prependNode(struct Node** head, int value) {

struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

newNode->data = value;
newNode->next = *head;
*head = newNode; // Aquì nuevo nodo se convierte en la nueva head de la lista.
}

