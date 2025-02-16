//
// Created by lukol on 16.02.2025.
//
#include "linked_list.h"

struct Node {
	int value;
	struct Node* next;
};

struct Node* newNode(int val) {
	struct Node* temp = (struct Node *) malloc(sizeof(struct Node));
	temp->value = val;
	temp->next = NULL;
	return temp;
}

void addToList(struct Node* A, int val) {
	struct Node* temp = newNode(val);
	struct Node* last = lastNodeOf(A);
	last->next = temp;
}

void insertToList(struct Node* A, int val, int index) {
	struct Node* temp = newNode(val);
	struct Node* prev = getAtIndex(A, index - 1);

	if (prev == NULL) {
		return;
	}

	temp->next = prev->next;
	prev->next = temp;
}

struct Node* lastNodeOf(struct Node* A) {
	while (A->next != NULL) {
		A = A->next;
	}
	return A;
}

struct Node* getAtIndex(struct Node* A, int idx) {
	for (int i = 0; i < idx; i++) {
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
