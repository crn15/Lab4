#include <stdio.h>
#include <stdlib.h>
#include "declarations.h"

int main() {
struct Node* head = NULL;

int num;
printf("INGRESE LA CANTIDAD DE ELEMENTOS A AGREGAR A LA LISTA: ");
scanf("%d", &num);

for (int i=0; i<num; i++) {
	int element;
	printf("INGRESE EL VALOR DEL ELEMENTO: ");
	scanf("%d", &element);

	appendNode(&head, element);}

printf("Lista inicial:\n");
printList(head);

//AQUI VAN LOS EJEMPLOS DE CÒMO FUNCIONA EL CÒDIGO.

// Agrega un nodo al inicio de la lista (valor 65).
prependNode(&head, 65);
printf("Lista después de agregar 65 al inicio:\n");
printList(head);

// Agrega un nodo al final de la lista (valor 83)
appendNode(&head, 83);
printf("Lista después de agregar 83 al final:\n");
printList(head);

// Elimina un nodo por valor (valor 65)
deleteNode(&head, 65);
printf("Lista después de eliminar el valor 65:\n");
printList(head);

// Busca un nodo por su valor (valor 65 y 83)
searchNode(head, 65);
searchNode(head, 83);

// Obtiene y muestra el enesimo elemento de la lista.
getNodeAtIndex(head, 7);

// Libera la memoria al final del programa
freeList(head);

return 0;
}

