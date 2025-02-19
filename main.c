#include <linked_list.h>

int main() {
	struct LinkedList* list = newLinkedList();
	reverseIter(list);
	reverseIter(list);
	addToList(list, 1);
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
}
