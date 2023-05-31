#include <iostream>
using namespace std;

class List {
	class Node {
	public:
		int data;
		Node* next;
		Node(int d) {
			data = d;
			next = NULL;
		}
	};
	Node* start;
public:
	List() {
		start = NULL;
	}

	void insert(int n) {
		Node* temp = start;
		if (temp == NULL) { start = new Node(n); return; }
		if (temp->next == NULL) { start->next = new Node(n); return; }

		while (temp && temp->next!=NULL)
		{
			temp = temp->next;
		}
		temp->next = new Node(n);
	}

	Node* insertRUtil(Node* curr, int n) {
		if(curr == NULL) { return new Node(n); }
		curr->next = insertRUtil(curr->next, n);
		return curr;
	}
	void insertR(int n) {
		Node* node = start;
		start = insertRUtil(node, n);
	}
	void deleteNodeR(Node*& head, int val) {
		if (head == NULL) {
			cout << "Element not present in the list\n";
			return;
		}
		if (head->data == val) {
			Node* t = head;
			head = head->next;
			delete (t);
			return;
		}
		deleteNodeR(head->next, val);
	}
	void deleteNode(int d) {
		deleteNodeR(start, d);
	}

	bool detectCycle() {
		Node* n1 = start, * n2 = start;
		while (n1->next != NULL && n1->next->next)
		{
			n1 = n1->next;
			n2 = n1->next;

			if (n1->data == n2->data) return true;
		}
		return false;
	}
	void display() {
		Node* temp = start;
		while (temp != NULL)
		{
			cout << temp->data << endl;
			temp = temp->next;
		}
	}
};

int main() {
	List l;
	l.insertR(3);
	l.insertR(5);
	l.insertR(8);
	cout << l.detectCycle() << endl;
	l.display();
}