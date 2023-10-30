#include <stdio.h>
#include <stdlib.h>

// Estructura para representar un nodo en la lista enlazada
struct Node {
int data;
struct Node* next;
};

// Función para agregar un nodo al final de la lista
void appendNode(struct Node** head, int value);

// Función para eliminar un nodo por valor
void deleteNode(struct Node** head, int value);

// Función para agregar un nodo al inicio de la lista
void prependNode(struct Node** head, int value);

// Función para buscar un nodo por valor e imprimir si existe o no
void searchNode(struct Node* head, int value);

// Función para imprimir la lista
void printList(struct Node* head);

// Función para obtener el elemento enésimo e imprimir su contenido
void getNodeAtIndex(struct Node* head, int index);

// Función para liberar la memoria de la lista
void freeList(struct Node* head);
