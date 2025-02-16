#include <linked_list.h>

int main() {
	struct Node* A = newNode(1);
	addToList(A, 2);
	addToList(A, 3);
	addToList(A, 4);
	insertToList(A, 5, 1);
	printList(A);
}
