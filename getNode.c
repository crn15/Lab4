#include <stdio.h>
#include <stdlib.h>

// Función para obtener el elemento enésimo e imprimir su contenido
void getNode(struct Node* head, int index) {
int count = 0;
struct Node* current = head;
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

