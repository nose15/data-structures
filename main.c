#include <linked_list.h>

int main() {
	struct LinkedList* list = newLinkedList();
	addToList(list, 1);
	printList(list->head);

	addToList(list, 2);
	printList(list->head);

	addToList(list, 3);
	printList(list->head);

	insertToList(list, 6, 0);
	printList(list->head);

	addToList(list, 5);
	printList(list->head);

	insertToList(list, 7, 3);
	printList(list->head);

	insertToList(list, 8, 12);
	printList(list->head);

	removeAtIndex(list, 0);
	printList(list->head);

	removeAtIndex(list, 3);
	printList(list->head);

	removeAtIndex(list, 12);
	printList(list->head);
}
