#include <stdio.h>
#include <stdlib.h>
#include "declarations.h"

// Función que imprime la lista.
void printList(struct Node* head) {
struct Node* current = head;
while (current != NULL) {
printf("%d -> ", current->data);
current = current->next;
}
printf("NULL\n");
}

// Función que libera la memoria de la lista.
void freeList(struct Node* head) {
while (head != NULL) {
struct Node* temp = head;
head = head->next;
free(temp); // Libera la memoria de cada nodo de la lista.
}
}


int main() {
struct Node* head = NULL;

int num;
printf("INGRESE LA CANTIDAD DE ELEMENTOS A AGREGAR A LA LISTA: ");
scanf("%d", &num);

for (int i=0; i<num; i++) {
	int element;
	printf("INGRESE EL VALOR DEL ELEMENTO %d: ", i+1);
	scanf("%d", &element);

	appendNode(&head, element);}

printf("\nLista ingresada:\n");
printList(head);

//AQUI VAN LOS EJEMPLOS DE CÒMO FUNCIONA EL CÒDIGO.

// Llama funcion que agrega un nodo al inicio de la lista (valor 65).
prependNode(&head, 65);
printf("\nLista después de agregar 65 al inicio:\n");
printList(head);

// Llama funcion que agrega un nodo al final de la lista (valor 83)
appendNode(&head, 83);
printf("\nLista después de agregar 83 al final:\n");
printList(head);

// Llama funcion que elimina un nodo por su valor (valor 65)
deleteNode(&head, 65);
printf("\nLista después de eliminar el valor 65:\n");
printList(head);

// Llama funcion que busca un nodo por su valor (valor 65 y 83)
searchNode(head, 65);
searchNode(head, 83);

// Llama funciòn que muestra el enesimo elemento (indice 2 y 5).
getNode(head, 2);
getNode(head, 5);

// Llama funcion que libera la memoria de la lista.
freeList(head);

return 0;
}

