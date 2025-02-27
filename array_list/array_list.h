//
// Created by lukol on 27.02.2025.
//

#ifndef LISTS_ARRAY_LIST_H
#define LISTS_ARRAY_LIST_H

#include <malloc.h>
#include <stdio.h>

struct ArrayList {
	int capacity;
	int size;
	int * arr;
};

struct ArrayList* newArrayList();
struct ArrayList* newArrayListWithCapacity(int capacity);
void add(struct ArrayList* target, int val);
void removeAt(struct ArrayList* target, int idx);
void insert(struct ArrayList* target, int idx, int val);
int get(struct ArrayList* target, int idx);
void set(struct ArrayList* target, int idx, int val);
void print(struct ArrayList* target);

#endif //LISTS_ARRAY_LIST_H
