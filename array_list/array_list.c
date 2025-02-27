//
// Created by lukol on 27.02.2025.
//

#include <array_list.h>

void shiftRight(struct ArrayList* target, int start);
void shiftLeft(struct ArrayList* target, int start);
void increaseCapacity(struct ArrayList* target);

struct ArrayList* newArrayList() {
	struct ArrayList* arrayList = (struct ArrayList*) malloc(sizeof(struct ArrayList));
	int initialCapacity = 10;
	int* arr = malloc(sizeof(int) * initialCapacity);

	arrayList->arr = arr;
	arrayList->capacity = initialCapacity;
	arrayList->size = 0;
	return arrayList;
}

struct ArrayList* newArrayListWithCapacity(int capacity) {
	struct ArrayList* arrayList = (struct ArrayList*) malloc(sizeof(struct ArrayList));
	int* arr = malloc(sizeof(int) * capacity);

	arrayList->arr = arr;
	arrayList->capacity = capacity;
	arrayList->size = 0;
	return arrayList;
}

void add(struct ArrayList* target, int val) {
	if (target->size + 1 > target->capacity) {
		increaseCapacity(target);
	}

	target->arr[target->size] = val;
	target->size++;
}

void removeAt(struct ArrayList* target, int idx) {
	shiftLeft(target, idx);
	target->size--;
}

void insert(struct ArrayList* target, int idx, int val){
	shiftRight(target, idx);
	target->arr[idx] = val;
	target->size++;
}

int get(struct ArrayList* target, int idx){
	return target->arr[idx];
}

void set(struct ArrayList* target, int idx, int val){
	if (idx >= target->size) return;

	target->arr[idx] = val;
}

void print(struct ArrayList* target) {
	printf("ArrayList - cap: %d, elements: ", target->capacity);
	for (int i = 0; i < target->size; i++) {
		printf("%d ", target->arr[i]);
	}
	printf("\n");
}

void shiftRight(struct ArrayList* target, int start) {
	if (target->size + 1 > target->capacity) {
		increaseCapacity(target);
	}

	for (int k = target->size; k > start; k--) {
		target->arr[k] = target->arr[k - 1];
	}
}

void shiftLeft(struct ArrayList* target, int start) {
	for (int i = start; i < target->size - 1; i++) {
		target->arr[i] = target->arr[i + 1];
	}
}

void increaseCapacity(struct ArrayList* target) {
	int newCap = target->capacity * 3/2 + 1;
	int* newArr = malloc(sizeof(int) * newCap);

	for (int i = 0; i < target->capacity; i++) {
		newArr[i] = target->arr[i];
	}

	free(target->arr);
	target->arr = newArr;
	target->capacity = newCap;
}
