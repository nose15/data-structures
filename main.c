#include <linked_list.h>

int main() {
	struct Node* A = newNode(1);
	addToList(A, 2);
	addToList(A, 3);
	addToList(A, 4);
	A = insertToList(A, 5, 1);
	A = insertToList(A, 8, 0);
	printList(A);
	A = removeAtIndex(A, 0);
	printList(A);
}
