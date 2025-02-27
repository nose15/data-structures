#include <linked_list.h>
#include <array_list.h>

void linkedListDemo() {
	struct LinkedList* list = newLinkedList();
	reverseIter(list);
	reverseIter(list);
	reverseRec(list);

	addToList(list, 1);
	reverseIter(list);
	reverseRec(list);
	printList(list->head);

	addToList(list, 2);
	addToList(list, 3);
	insertToList(list, 6, 0);
	addToList(list, 5);
	insertToList(list, 7, 3);
	insertToList(list, 8, 12);
	printList(list->head);
	reverseIter(list);
	printList(list->head);
	reverseIter(list);
	printList(list->head);

	removeAtIndex(list, 0);
	removeAtIndex(list, 3);
	removeAtIndex(list, 12);
	printList(list->head);

	reverseIter(list);
	printList(list->head);

	reverseRec(list);
	printList(list->head);

	printRec(list, true);
	printRec(list, false);
}

void arrayListDemo() {
	struct ArrayList* arrayList = newArrayList();
	removeAt(arrayList, 1);
	insert(arrayList, 2, 7);
	insert(arrayList, 0, 6);
	print(arrayList);

	add(arrayList, 10);
	add(arrayList, 4);
	add(arrayList, 1);
	add(arrayList, 5);
	print(arrayList);

	insert(arrayList, 2, 7);
	insert(arrayList, 2, 3);
	print(arrayList);

	removeAt(arrayList, 1);
	removeAt(arrayList, 5);
	removeAt(arrayList, 0);
	print(arrayList);

	set(arrayList, 2, 9);
	set(arrayList, 0, 0);
	add(arrayList, 5);
	add(arrayList, 5);
	add(arrayList, 5);
	add(arrayList, 5);
	add(arrayList, 5);
	add(arrayList, 5);
	print(arrayList);

	add(arrayList, 5);
	print(arrayList);
}

int main() {
	arrayListDemo();
}
