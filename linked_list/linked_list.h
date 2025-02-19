//
// Created by lukol on 16.02.2025.
//

#ifndef LISTS_LINKED_LIST_H
#define LISTS_LINKED_LIST_H

#include <stdio.h>
#include <malloc.h>
#include <node.h>
#include <stdbool.h>

struct LinkedList {
	struct Node* head;
};

struct LinkedList* newLinkedList();
int getSizeOfList(struct LinkedList * A);
void addToList(struct LinkedList* A, int val);
void insertToList(struct LinkedList* A, int val, int index);
void removeAtIndex(struct LinkedList* A, int index);
void reverseIter(struct LinkedList* target);
void reverseRec(struct LinkedList* target);
void printRec(struct LinkedList* target, bool reverse);

#endif //LISTS_LINKED_LIST_H
