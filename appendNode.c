#include <stdio.h>
#include <stdlib.h>

// Función para agregar un nodo al final de la lista.
void appendNode(struct Node** head, int value) {

struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

newNode->data = value;

newNode->next = NULL;

// Con el condicional, si la lista está vacía, el nuevo nodo se convierte en la cabeza de la lista.
if (*head == NULL) {
*head = newNode;
}
else {

struct Node* current = *head;

while (current->next != NULL) {
current = current->next;
}

// Aquì se agrega el nodo al final de la lista.
current->next = newNode;
}
}

