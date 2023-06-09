
#include"Linked_List.h"




int main() {

/*
	 Dynamic data structures:
		- List (Linked, Double linked)	
		- Stack LIFO	
		- Queues FIFO (first in first out)
		- Trees
		- Graphs
		- Hash tables
*/ 

	cout << "linked list" << endl << endl;
	LinkedList<int> list;
	list.add(2);
	list.add(5);
	list.add(15);
	list.add(25);
	list.print();
	list.remove();
	list.print();

	Node<int>* node = list.find(5);
	if (node != 0) {
		node->value = 35;
	}
	list.print();

	list.addAfter(135, node);
	list.print();
	list.clear();
	list.print();


}


