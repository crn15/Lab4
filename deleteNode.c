#include <stdio.h>
#include <stdlib.h>

// Función para eliminar un nodo por valor
void deleteNode(struct Node** head, int value) {
if (*head == NULL) {
return; // Si la lista está vacía, no se hace nada.
}
if ((*head)->data == value) {
struct Node* temp = *head;
*head = (*head)->next;
free(temp); // Elimina el primer nodo si contiene el valor buscado.
return;
}
struct Node* current = *head;
while (current->next != NULL && current->next->data != value) {
current = current->next;
}
if (current->next == NULL) {
return; // Si no se encuentra el valor, no se hace nada.
}
struct Node* temp = current->next;
current->next = current->next->next;
free(temp); // Elimina un nodo que contiene el valor buscado.
}

