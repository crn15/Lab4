#include <stdio.h>
#include <stdlib.h>
#include "declarations.h"

// Función para eliminar un nodo a partir de su valor.
void deleteNode(struct Node** head, int value) {

//En este condicional, si la lista està vacìa, entonces no continua corriendo la funcion.
if (*head == NULL) {
return;
}

if ((*head)->data == value) {
struct Node* temp = *head;
*head = (*head)->next;
free(temp); // Aquì se elimina el primer nodo si este contiene el valor buscado.
return;
}

struct Node* current = *head;

while (current->next != NULL && current->next->data != value) {
current = current->next;
}

//En este condicional, si la lista està vacìa, entonces no continua corriendo la funcion.
if (current->next == NULL) {
return;
}

struct Node* temp = current->next;
current->next = current->next->next;
free(temp); // Aquì se elimina el nodo que contiene el valor buscado.
}

