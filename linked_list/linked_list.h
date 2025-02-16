//
// Created by lukol on 16.02.2025.
//

#ifndef LISTS_LINKED_LIST_H
#define LISTS_LINKED_LIST_H

#include <stdio.h>
#include <malloc.h>

struct Node* lastNodeOf(struct Node* A);
struct Node* getAtIndex(struct Node* A, int idx);
struct Node* newNode(int);
void addToList(struct Node* A, int val);
void insertToList(struct Node* A, int val, int index);
void printList(struct Node* A);

#endif //LISTS_LINKED_LIST_H
