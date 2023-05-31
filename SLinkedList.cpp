//#include "iostream"
//using namespace std;
//
//class Node {
//public:
//	int val, key;
//	Node* next;
//
//	Node(int val, int key) {
//		this->val = val;
//		this->key = key;
//		this->next = NULL;
//	}
//};
//
//class SinglyLinkedList {
//	Node* head;
//public:
//	SinglyLinkedList() {
//		this->head = NULL;
//	}
//	SinglyLinkedList(Node * node) {
//		this->head = node;
//	}
//	Node* nodeExist(int key) {
//		Node* temp = NULL;
//		Node* ptr = this->head;
//
//		while (ptr != NULL) {
//			if (key == ptr->key) {
//				temp = ptr;
//			}
//			ptr = ptr->next;
//		}
//		return temp;
//	}
//
//	void addNode(Node* node) {
//		if (nodeExist(node->key) != NULL) { cout << "Node Already Exist With This Key" << endl; return; }
//		else if (this->head == NULL) { cout << "Head Node Added with key: " << node->key << " With value: " << node->val << endl;
//		this->head = node; return; }
//		else {
//			Node* temp = head;
//			while (temp->next != NULL) { temp = temp->next; }
//			temp->next = node;
//			cout << "Node Added with key: " << node->key << " With value: " << node->val << endl;
//		}
//	}
//
//	void insertNode(int key, Node* node) {
//		if (nodeExist(node->key) != NULL) { cout << "Node Already Exist With This Key" << endl; return; }
//		else {
//			if (nodeExist(key) == NULL) { cout << "No Node Exist With This Key..." << endl; return; }
//			else {
//				Node* temp = nodeExist(key);
//				node->next = temp->next;
//				temp->next = node;
//				cout << "Node Inserted with key: " << node->key << " After node key: " << key << " With value: " << node->val << endl;
//			}
//		}
//	}
//
//	void prependNode(Node* node) {
//		if (nodeExist(node->key) != NULL) { cout << "Node Already Exist With This Key" << endl; return; }
//		else if (head == NULL) { head = node; cout << "Head Node Prepended with key: " << node->key << " With value: " << node->val << endl;
//		}
//		else { node->next = head; head = node; cout << "Node Prepended with key: " << node->key << " With value: " << node->val << endl; }
//	}
//
//	void printList() {
//		Node* ptr = this->head;
//		int i = 0;
//		while (ptr != NULL) {
//			cout << "Node " << i << "  " << ptr->key << "  " << ptr->val << endl;
//			ptr = ptr->next;
//			i++;
//		}
//	}
//
//	void deleteNode(int k) {
//		if (head == NULL) { cout << "Singly Linked List Is Empty" << endl; return; }
//		else if (head->key == k) { head = head->next; cout << "Head Node Is Unlinked with key: " << k << endl; return; }
//		else {
//			Node* temp = NULL;
//			Node* prevPtr = head;
//			Node* currPtr = head->next;
//
//			while (currPtr != NULL) {
//				if (currPtr->key == k) { temp = currPtr; currPtr = NULL; }
//				else { prevPtr = prevPtr->next; currPtr = currPtr->next; }
//			}
//
//			if (temp == NULL) { cout << "No Node Exist With Key " << endl; }
//			else { prevPtr->next = temp->next; cout << "Node Is Unlinked with key: " << k << endl; }
//		}		
//	}
//
//	void updateNode(int key, int value) {
//		Node* n = nodeExist(key);
//		if (n == NULL) { cout << "No Node Exist With Key " << endl; }
//		else {
//			n->val = value; cout << "Node Is Updated with key: " << key << " And New Value: " << value << endl;
//		}
//	}
//
//	//  0 123 next->  1 234 next-> 2 1345 next = NULL
//	void swap(int k) {
//		Node* prev = NULL; // to store prev
//
//		Node* next = NULL;
//		Node* temp = NULL;
//
//		Node* currPtr = head;
//
//		while (currPtr->next != NULL) {
//			if (currPtr->next->key == k) {
//				prev = currPtr;
//				break;
//			}
//			currPtr = currPtr->next;
//		}
//		if (prev != NULL) {
//			temp = prev->next;
//			next = temp->next;
//		}
//
//		Node* n = nodeExist(k); //current
//
//		if (prev != NULL) {
//			prev->next = n;
//			temp = prev->next;
//			next = temp->next;
//
//			next->next = temp;
//			prev->next = next;
//		}
//		else
//			cout << "NULL" << endl;
//	}
//};
//
//int main() {
//	Node n1(2, 10);
//	Node n2(3, 20);
//	Node n3(4, 30);
//	Node n4(5, 40);
//	Node n5(10, 50);
//
//	SinglyLinkedList list;
//	list.addNode(&n1);
//	list.addNode(&n2);
//	list.addNode(&n3);
//	list.addNode(&n4);
//	//list.insertNode(2, &n5);
//	list.swap(30);
//	list.printList();
//}