//
// Created by lukol on 16.02.2025.
//
#include <node.h>

struct Node* newNode(int val) {
	struct Node* temp = (struct Node *) malloc(sizeof(struct Node));
	temp->value = val;
	temp->next = NULL;
	return temp;
}

struct Node* traverseToLast(struct Node* A) {
	while (A->next != NULL) {
		A = A->next;
	}
	return A;
}

struct Node* traverseByOffset(struct Node* A, int offset) {
	for (int i = 0; i < offset; i++) {
		A = A->next;

		if (A == NULL) {
			return NULL;
		}
	}
	return A;
}

void printList(struct Node* A) {
	while (A != NULL) {
		printf("%d ", A->value);
		A = A->next;
	}
	printf("\n");
}