#include <iostream>
#include <stack>
using namespace std;
// Code for linked list
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

class SinglyLinkedList {
	Node* head;
public:
	SinglyLinkedList() {
		head = NULL;
	}
	SinglyLinkedList(Node* node) {
		head = new Node(node->val, node->key);
	}
	Node* nodeExist(int key) {
		Node* temp = NULL;
		Node* ptr = this->head;

		while (ptr != NULL) {
			if (key == ptr->key) {
				temp = ptr;
			}
			ptr = ptr->next;
		}
		return temp;
	}

	void addNode(Node* node) {
		if (nodeExist(node->key) != NULL) { cout << "Node Already Exist With This Key" << endl; return; }
		else if (this->head == NULL) {
			cout << "Head Node Added with key: " << node->key << " With value: " << node->val << endl;
			this->head = node; return;
		}
		else {
			Node* temp = head;
			while (temp->next != NULL) { temp = temp->next; }
			temp->next = node;
			cout << "Node Added with key: " << node->key << " With value: " << node->val << endl;
		}
	}

	void insertNode(int key, Node* node) {
		if (nodeExist(node->key) != NULL) { cout << "Node Already Exist With This Key" << endl; return; }
		else {
			if (nodeExist(key) == NULL) { cout << "No Node Exist With This Key..." << endl; return; }
			else {
				Node* temp = nodeExist(key);
				node->next = temp->next;
				temp->next = node;
				cout << "Node Inserted with key: " << node->key << " After node key: " << key << " With value: " << node->val << endl;
			}
		}
	}

	void prependNode(Node* node) {
		if (nodeExist(node->key) != NULL) { cout << "Node Already Exist With This Key" << endl; return; }
		else if (head == NULL) {
			head = node; cout << "Head Node Prepended with key: " << node->key << " With value: " << node->val << endl;
		}
		else { node->next = head; head = node; cout << "Node Prepended with key: " << node->key << " With value: " << node->val << endl; }
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

	//  0 123 next->  1 234 next-> 2 1345 next = NULL
	void swap(int k) {
		Node* prev = NULL; // to store prev

		Node* next = NULL;
		Node* temp = NULL;

		Node* currPtr = head;

		while (currPtr->next != NULL) {
			if (currPtr->next->key == k) {
				prev = currPtr;
				break;
			}
			currPtr = currPtr->next;
		}
		if (prev != NULL) {
			temp = prev->next;
			next = temp->next;
		}

		Node* n = nodeExist(k); //current

		if (prev != NULL) {
			prev->next = n;
			temp = prev->next;
			next = temp->next;

			next->next = temp;
			prev->next = next;
		}
		else
			cout << "NULL" << endl;
	}

//	 p: Write a Program to reverse the Linked List. (Both Iterative and recursive)
	void reverseListIt() {
		Node* prev = NULL; Node* next = NULL;
		Node* curr = this->head;

		while (curr != NULL) {
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
		}
		head = prev;
	}
	Node* reverseListR(Node* h) {
		if (h == NULL) {
			return h;
		}
		if (h->next == NULL) {
			head = h;
			return head;
		}

		Node* next = reverseListR(h->next);
		next->next = h;
		h->next = NULL;
		return h;
	}

	// p: Reverse a Linked List in group of Given Size. [Very Imp]
	Node* reverseInGrp(Node* head, int k) {
		if (!head) return NULL;
		Node* curr = head; Node* prev = NULL; Node* next = NULL;
		int count = 0;
		while (curr != NULL && count < k) {
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
			count++;
		}
		if (next != NULL) {
			head->next = reverseInGrp(next, k);
		}
		return prev;
	}
	
	// p: detect loop in linked list
	Node* isLoopPresent() {
		if (!head) return NULL;
		Node* slow = head, * fast = head;

		while (slow && fast && fast->next) {
			slow = slow->next;
			fast = fast->next->next;
			if (slow == fast) return slow;
		}
		return NULL;
	}

	//p: start point of loop in list
	Node* startOfLoop() {
		if (!head) return NULL;
		Node* intersection = isLoopPresent();
		Node* slow = head;
		if (intersection != NULL) {
			while (intersection && slow) {
				if (intersection == slow) return intersection;
				intersection = intersection->next;
				slow = slow->next;
			}
		}
		else return NULL;
	}

	// p: Delete loop in list
	void deleteLoop() {
		if (!head) return;
		if (!isLoopPresent()) return;

		Node* startNode = startOfLoop(), *temp = head;
		while (temp->next != startNode) {
			temp = temp->next;
		}
		temp->next = NULL;
	}

	// p: delete duplicates of sorted list
	void removeDuplicates() {
		if (!head) return;

		Node* curr = head, * next = NULL;
		while (curr->next) {
			next = curr->next;
			if (curr->val == next->val) {
				curr->next = next->next;
			}
			else {
				curr = curr->next;
			}
		}
	}

	// p: move last element of list to front
	void moveLastElem() {
		if (!head) return;
		Node* temp = head, * lElem = NULL, * prev = head;
		while (temp->next) {
			if (temp->next->next == NULL) prev = temp;
			temp = temp->next;
		}
		prev->next = NULL;
		lElem = temp;
		lElem->next = head;
		head = lElem;
	}

	// p: Find the middle Element of a linked list.
	Node* middleOfList() {
		if (!head) return NULL;
		Node* slow = head, * fast = head;

		while (fast->next && fast->next->next) {
			slow = slow->next;
			fast = fast->next->next;
		}
		return slow;
	}

	// p: Check if a linked list is a circular linked list.
	bool isCircular() {
		Node* temp = head;

		while (temp->next && temp->next != head) {
			temp = temp->next;
		}
		return (temp->next == head);
	}

	// p: Program for n�th node from the end of a Linked List
	Node* nthNodeFromEnd(int n) {
		Node* temp = head; int count = 1;
		while (temp->next) {
			temp = temp->next;
			count++;
		}
		temp = head; int c = 0;
		while (temp->next && c < count - n) {
			temp = temp->next;
			c++;
		}
		return temp;
	}
};


void FrontBackSplit(Node* source, Node** frontRef, Node** backRef)
{
	Node* fast;
	Node* slow;
	slow = source;
	fast = source->next;

	/* Advance 'fast' two nodes, and advance 'slow' one node */
	while (fast != NULL) {
		fast = fast->next;
		if (fast != NULL) {
			slow = slow->next;
			fast = fast->next;
		}
	}

	/* 'slow' is before the midpoint in the list, so split it in two
	at that point. */
	*frontRef = source;
	*backRef = slow->next;
	slow->next = NULL;
}

Node* SortedMerge(Node* a, Node* b)
{
	Node* result = NULL;

	/* Base cases */
	if (a == NULL)
		return (b);
	else if (b == NULL)
		return (a);

	/* Pick either a or b, and recur */
	if (a->val <= b->val) {
		result = a;
		result->next = SortedMerge(a->next, b);
	}
	else {
		result = b;
		result->next = SortedMerge(a, b->next);
	}
	return (result);
}

void MergeSort(Node** headRef)
{
	Node* head = *headRef;
	Node* a;
	Node* b;

	/* Base case -- length 0 or 1 */
	if ((head == NULL) || (head->next == NULL)) {
		return;
	}

	/* Split head into 'a' and 'b' sublists */
	FrontBackSplit(head, &a, &b);

	/* Recursively sort the sublists */
	MergeSort(&a);
	MergeSort(&b);

	/* answer = merge the two sorted lists together */
	*headRef = SortedMerge(a, b);
}

// p: Split a Circular linked list into two halves.
void splitCircular(Node** first, Node** second, Node* head) {
	Node* fast;
	Node* slow;
	slow = head;
	fast = head->next;
	if (head == NULL || head->next == NULL) return;
	while (fast != head && fast->next != head) {
		fast = fast->next;
		if (fast != NULL) {
			slow = slow->next;
			fast = fast->next;
		}
	}

	*first = head;
	*second = slow->next;
	slow->next = NULL;
}

// p: Write a Program to check whether the Singly Linked list is a palindrome or not.
bool isListPalindrome(Node* head) {
	string str = "";
	string test = "";
	stack<int> list;

	Node* curr = head;
	while (curr != NULL) {
		str += char(curr->val + 48);
		list.push(curr->val);
		curr = curr->next;
	}
	while (!list.empty()) {
		int top = list.top();
		list.pop();
		test += char(top + 48);
	}
	return test == str;
}
int main() {
	Node* n1 = new Node(2, 4);
	Node* n2 = new Node(3, 8);
	Node* n3 = new Node(4, 12);
	Node* n4 = new Node(5, 16);
	Node* n5 = new Node(5, 20);
	Node* n6 = new Node(4, 24);
	Node* n7 = new Node(3, 28);
	Node* n8 = new Node(2, 32);
	SinglyLinkedList list;
	list.addNode(n1);
	list.addNode(n2);
	list.addNode(n3);
	list.addNode(n4);
	list.addNode(n5);
	list.addNode(n6);
	list.addNode(n7);
	list.addNode(n8);
	list.printList();
	//list.reverseInGrp(n1,2);
	/*list.removeDuplicates();*/
	cout << endl;
	//list.moveLastElem();
	//list.printList();
	//cout << list.isCircular() << endl;
	//cout <<"value: "<<list.nthNodeFromEnd(3)->val << endl;
	//MergeSort(&n1);
	//splitCircular(&n1, &n2, n1);
	//cout << n1->val << " " << n2->val << endl;
	//list.printList();
	cout<<isListPalindrome(n1);
	//string a = "bc";
	//cout << static_cast <char>(2 + 44);
	//cout << a;
	//cout << char(2 + 48);
}