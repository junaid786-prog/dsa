//#include "iostream"
//using namespace std;
//
//class Node {
//public:
//	int val, key;
//	Node* next;
//	Node* previous;
//
//	Node(int val, int key) {
//		this->val = val;
//		this->key = key;
//		this->next = NULL;
//		this->previous = NULL;
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
//	void appendNode(Node* node) {
//		if (nodeExist(node->key) != NULL) { cout << "Node Already Exist With This Key" << endl; return; }
//		else if (this->head == NULL) { cout << "Head Node Added with key: " << node->key << " With value: " << node->val << endl;
//		this->head = node; return; }
//		else {
//			Node* temp = head;
//			while (temp->next != NULL) { temp = temp->next; }
//			temp->next = node;
//			node->previous = temp;
//			cout << "Node Added with key: " << node->key << " With value: " << node->val << endl;
//		}
//	}
//
//	void insertNode(int key, Node* node) {
//		if (nodeExist(node->key) != NULL) { cout << "Node Already Exist With This Key" << endl; return; }
//		if (nodeExist(key) == NULL) { cout << "No Node Exist With This Key..." << endl; return; }
//		else {
//			Node* temp = nodeExist(key);
//			if (temp->next == NULL) { temp->next = node; node->previous = temp;
//			cout << "Node Inserted At Last with key: " << node->key << " After node key: " << key << " With value: " << node->val << endl;
//			} // if node after which we want to insert is last
//			else {
//				Node* nextPtr = temp->next;
//				node->next = nextPtr;
//				nextPtr->previous = node;
//				node->previous = temp;
//				temp->next = node;
//				cout << "Node Inserted with key: " << node->key << " After node key: " << key << " With value: " << node->val << endl;
//			}
//		}
//	}
//
//	void prependNode(Node* node) {
//		if (nodeExist(node->key) != NULL) { cout << "Node Already Exist With This Key" << endl; return; }
//		if (head == NULL) { head = node; cout << "Head Node Prepended with key: " << node->key << " With value: " << node->val << endl;
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
//		if (head->key == k) { head = head->next; cout << "Head Node Is Unlinked with key: " << k << endl; return; }
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
//			else { prevPtr->next = temp->next; temp->next->previous = prevPtr; cout << "Node Is Unlinked with key: " << k << endl; }
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
//};
//
//int main() {
//	Node n1(2, 1);
//	Node n2(3, 2);
//	Node n3(4, 3);
//	Node n4(5, 4);
//	Node n5(10, 5);
//
//	SinglyLinkedList list;
//	list.appendNode(&n1);
//	list.appendNode(&n2);
//	list.appendNode(&n3);
//	list.appendNode(&n4);
//	list.insertNode(3, &n5);
//	list.printList();
//	cout << endl << endl;
//	list.deleteNode(5);
//	list.updateNode(1, 50);
//	//list.updateNode(3, 8);
//	cout << endl << endl;
//	list.printList();
//}
