//
// Created by lukol on 16.02.2025.
//
#include <linked_list.h>

struct LinkedList* newLinkedList() {
	struct LinkedList* temp = (struct LinkedList*) malloc(sizeof(struct LinkedList));
	temp->head = NULL;
	return temp;
}

int getSizeOfList(struct LinkedList* A) {
	int count = 0;
	struct Node* current = A->head;

	while (current != NULL) {
		count++;
		current = current->next;
	}
	return count;
}

void addToList(struct LinkedList* A, int val) {
	if (A->head == NULL) {
		A->head = newNode(val);
	} else {
		struct Node* temp = newNode(val);
		struct Node* last = traverseToLast(A->head);
		last->next = temp;
	}
}

void insertToList(struct LinkedList* A, int val, int index) {
	struct Node* temp = newNode(val);

	if (index == 0) {
		temp->next = A->head;
		A->head = temp;
	} else {
		struct Node* prev = traverseByOffset(A->head, index - 1);
		if (prev == NULL || prev->next == NULL) return;

		temp->next = prev->next;
		prev->next = temp;
	}
}

void removeAtIndex(struct LinkedList* A, int index) {
	if (index == 0) {
		struct Node* newLink = A->head->next;
		free(A->head);
		A->head = newLink;
	} else {
		struct Node* temp = traverseByOffset(A->head, index - 1);

		if (temp == NULL || temp->next == NULL) return;

		struct Node* toDelete = temp->next;
		struct Node* newLink = toDelete->next;

		free(toDelete);
		temp->next = newLink;
	}
}
