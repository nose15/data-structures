//
// Created by lukol on 16.02.2025.
//
#include <linked_list.h>

void printNodesRec(struct Node* current);
void printNodesReversedRec(struct Node* current);
struct Node* reverseNodesRec(struct Node* first, struct Node* newLink);

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

void reverseIter(struct LinkedList* target) {
	struct Node* prev = NULL;
	struct Node* current = target->head;
	struct Node* next;

	while (current != NULL) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	target->head = prev;
}

void reverseRec(struct LinkedList* target) {
	target->head = reverseNodesRec(target->head, NULL);
}

void printRec(struct LinkedList* target, bool reverse) {
	if (reverse) {
		printNodesReversedRec(target->head);
	} else {
		printNodesRec(target->head);
	}
	printf("\n");
}

struct Node* reverseNodesRec(struct Node* first, struct Node* newLink) {
	if (first == NULL) {
		return NULL;
	}

	if (first->next == NULL) {
		first->next = newLink;
		return first;
	}

	struct Node* next = first->next;
	first->next = newLink;
	return reverseNodesRec(next, first);
}

void printNodesRec(struct Node* current) {
	if (current == NULL) {
		return;
	}
	printf("%d ", current->value);
	printNodesRec(current->next);
}

void printNodesReversedRec(struct Node* current) {
	if (current == NULL) {
		return;
	}
	printNodesReversedRec(current->next);
	printf("%d ", current->value);
}
