#include "iostream"
using namespace std;

class Node {
public:
	int val, key;
	Node* next;

	Node(int val, int key) {
		this->val = val;
		this->key = key;
		this->next = NULL;
	}
};

class CircularLinkedList {
	Node* head;
public:
	CircularLinkedList() {
		this->head = NULL;
	}
	CircularLinkedList(Node * node) {
		this->head = node;
	}
	Node* nodeExist(int key) {
		Node* temp = NULL;
		Node* ptr = this->head;
		if (ptr == NULL) return temp;
		do {
			if (ptr->key == key) { temp = ptr; }
			ptr = ptr->next;
		} while (ptr != head);
		return temp;
	}

	void addNode(Node* node) {
		if (nodeExist(node->key) != NULL) { cout << "Node Already Exist With This Key" << endl; return; }
		else if (this->head == NULL) {
			cout << "Head Node Added with key: " << node->key << " With value: " << node->val << endl;
			node->next = head; this->head = node; return;
		}
		else {
			Node* temp = head;
			while (temp->next != head) { temp = temp->next; }
			node->next = head; temp->next = node;
			cout << "Node Added with key: " << node->key << " With value: " << node->val << endl;
		}
	}

	void insertNode(int key, Node* node) {
		if (nodeExist(node->key) != NULL) { cout << "Node Already Exist With This Key" << endl; return; }
		if (nodeExist(key) == NULL) { cout << "No Node Exist With This Key..." << endl; return; }
		Node* foundNode = nodeExist(key);
		if (foundNode->next == head) {
			node->next = head;
			foundNode->next = node;
			cout << "Node Inserted with key: " << node->key << " At Last After node key: " << key << " With value: " << node->val << endl;
		}
		else {
			node->next = foundNode->next;
			foundNode->next = node;
		}
	}

	void prependNode(Node* node) {
		if (nodeExist(node->key) != NULL) { cout << "Node Already Exist With This Key" << endl; return; }
		else if (head == NULL) { head = node; cout << "Head Node Prepended with key: " << node->key << " With value: " << node->val << endl;
		}
		else {
			Node* temp = head;
			while (temp->next != head) { temp = temp->next; }
			temp->next = node;
			node->next = head; head = node;
			cout << "Node Prepended with key: " << node->key << " With value: " << node->val << endl;
		}
	}

	void printList() {
		Node* ptr = this->head;
		int i = 0;
		while (ptr != NULL) {
			cout << "Node " << i << "  " << ptr->key << "  " << ptr->val << endl;
			ptr = ptr->next;
			i++;
		}
	}

	void deleteNode(int k) {
		if (head == NULL) { cout << "Singly Linked List Is Empty" << endl; return; }
		else if (head->key == k) { head = head->next; cout << "Head Node Is Unlinked with key: " << k << endl; return; }
		else {
			Node* temp = NULL;
			Node* prevPtr = head;
			Node* currPtr = head->next;

			while (currPtr != NULL) {
				if (currPtr->key == k) { temp = currPtr; currPtr = NULL; }
				else { prevPtr = prevPtr->next; currPtr = currPtr->next; }
			}

			if (temp == NULL) { cout << "No Node Exist With Key " << endl; }
			else { prevPtr->next = temp->next; cout << "Node Is Unlinked with key: " << k << endl; }
		}		
	}

	void updateNode(int key, int value) {
		Node* n = nodeExist(key);
		if (n == NULL) { cout << "No Node Exist With Key " << endl; }
		else {
			n->val = value; cout << "Node Is Updated with key: " << key << " And New Value: " << value << endl;
		}
	}
};

int main() {
	Node n1(2, 1);
	Node n2(3, 2);
	Node n3(4, 3);
	Node n4(5, 4);
	Node n5(10, 5);

	CircularLinkedList list;
	list.addNode(&n1);
	list.addNode(&n2);
	list.addNode(&n3);
	list.addNode(&n4);
	list.insertNode(2, &n5);
	list.printList();
	cout << endl << endl;
	list.deleteNode(1);
	list.updateNode(1, 50);
	//list.updateNode(3, 8);
	cout << endl << endl;
	list.printList();
}