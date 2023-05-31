//#include "iostream"
//using namespace std;
//
//class Queue {
//	int size;
//	int front, rear;
//	int* arr;
//
//public:
//	Queue(int size = 1) {
//		this->size = size;
//		front = rear = -1;
//		arr = new int[size];
//		for (int i = 0; i < size; i++) {
//			arr[i] = 0;
//		}
//	}
//	bool isEmpty() {
//		return (front == -1 && rear == -1) ? true : false;
//	}
//	bool isFull() {
//		return (rear == size-1 ) ? true : false;
//	}
//
//	void enqueue(int elem) {
//		if (isFull()) { cout << "Queue is full" << endl; return; }
//		else if (isEmpty()) {
//			rear = front = 0;
//			arr[front] = elem;
//		}
//		else {
//			rear++;
//			arr[rear] = elem;
//		}
//	}
//	int dequeue() {
//		if (isEmpty()) {
//			cout << "Queue is empty" << endl; return 0;
//		}
//		else if (rear == front) {
//			int temp = arr[front];
//			arr[front] = 0;
//			front = rear = -1;
//			return temp;
//		}
//		else {
//			int temp = arr[front];
//			arr[front] = 0;
//			front++;
//			return temp;
//		}
//	}
//	int count() {
//		return isEmpty() ? 0 : (rear - front + 1);
//	}
//	
//	void print() {
//		for (int i = 0; i < size; i++) {
//			cout << arr[i] << endl;
//		}
//	}
//	~Queue()
//	{
//		delete[] arr;
//	}
//};
//
//int main() {
//	Queue queue(3);
//	queue.enqueue(5);
//	queue.enqueue(3);
//	queue.enqueue(2);
//	queue.print();
//	cout << endl;
//	cout << queue.dequeue();
//	cout << endl;
//	queue.enqueue(20);
//	cout <<"Full: "<< queue.isFull() << endl;
//	cout <<"Empty: "<< queue.isEmpty() << endl;
//	cout <<"Count: "<< queue.count() << endl;
//	queue.print();
//	
//	
//	return 0;
//}
//
// ====================== Circular Queue ====================== //
//
//#include "iostream"
//using namespace std;
//
//class CQueue {
//	int size;
//	int front, rear;
//	int* arr;
//	int countElem; // to track how much new elements are enqueued or dequeued
//
//public:
//	CQueue(int size = 1) {
//		this->size = size;
//		front = rear = -1;
//		arr = new int[size];
//		for (int i = 0; i < size; i++) {
//			arr[i] = 0;
//		}
//		countElem = 0;
//	}
//	bool isEmpty() {
//		return (front == -1 && rear == -1) ? true : false;
//	}
//	bool isFull() {
//		return ((rear + 1) % size == front) ? true : false;
//	}
//
//	void enqueue(int elem) {
//		if (isFull()) { cout << "Circular Queue is full" << endl; return; }
//		else if (isEmpty()) {
//			rear = front = 0;
//			arr[front] = elem;
//		}
//		else {
//			rear = (rear + 1) % size;
//			arr[rear] = elem;
//		}
//		countElem++;
//	}
//	int dequeue() {
//		if (isEmpty()) {
//			cout << "Circular Queue is empty" << endl; return 0;
//		}
//		else if (rear == front) {
//			int temp = arr[front];
//			arr[front] = 0;
//			front = rear = -1;
//			return temp;
//		}
//		else {
//			int temp = arr[front];
//			arr[front] = 0;
//			front = (front + 1) % size;
//			return temp;
//		}
//		countElem--;
//	}
//	int count() {
//		return countElem;
//	}
//	
//	void print() {
//		for (int i = 0; i < size; i++) {
//			cout << arr[i] << endl;
//		}
//	}
//	~CQueue()
//	{
//		delete[] arr;
//	}
//};
//
//int main() {
//	CQueue queue(3);
//	queue.enqueue(5);
//	queue.enqueue(3);
//	queue.enqueue(2);
//	queue.print();
//	cout << endl;
//	cout << queue.dequeue();
//	queue.enqueue(3);
//	cout << endl;
//	cout <<"Full: "<< queue.isFull() << endl;
//	cout <<"Empty: "<< queue.isEmpty() << endl;
//	cout <<"Count: "<< queue.count() << endl;
//	queue.print();
//	
//	
//	return 0;
//}