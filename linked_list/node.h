//
// Created by lukol on 16.02.2025.
//

#ifndef LISTS_NODE_H
#define LISTS_NODE_H

#include <stdio.h>
#include <malloc.h>

struct Node {
	int value;
	struct Node* next;
};

struct Node* newNode(int);
struct Node* traverseByOffset(struct Node* A, int offset);
struct Node* traverseToLast(struct Node* A);
void printList(struct Node* A);

#endif //LISTS_NODE_H
