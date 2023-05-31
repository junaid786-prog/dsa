//#include "iostream"
//using namespace std;
//
//class Stack {
//	int size;
//	int top;
//	int* arr;
//
//public:
//	Stack(int size = 1) {
//		this->size = size;
//		top = -1;
//		arr = new int[size];
//		for (int i = 0; i < size; i++) {
//			arr[i] = 0;
//		}
//	}
//	bool isEmpty() {
//		return (top == -1) ?  true : false;
//	}
//	bool isFull() {
//		return (top == size-1) ? true : false;
//	}
//
//	void push(int elem) {
//		if (isFull()) cout << "Stack Overflow" << endl;
//		else {
//			arr[top + 1] = elem;
//			top++;
//		}
//	}
//	int pop() {
//		if (isEmpty()) {
//			cout << "Stack Underflow" << endl; return 0;
//		}
//		else {
//			int temp = arr[top];
//			arr[top] = 0;
//			top--;
//			return temp;
//		}
//	}
//	int count() {
//		return top + 1;
//	}
//	int peek(int pos) {
//		if (!isEmpty()) {
//			return arr[pos];
//		}
//		else { cout << "Stack is empty" << endl; return 0; }
//	}
//	void change(int elem, int pos) {
//		if (!isEmpty()) {
//			if (pos >= 0 && pos < size)
//				arr[pos] = elem;
//		}
//		else cout << "Enter valid position" << endl;
//	}
//	void print() {
//		for (int i = 0; i < size; i++) {
//			cout << arr[i] << endl;
//		}
//	}
//	~Stack() {
//		delete[] arr;
//	}
//};
//
//int main() {
//	Stack stack(3);
//	stack.push(5);
//	stack.push(3);
//	stack.push(2);
//	stack.print();
//	cout << endl;
//	cout << stack.isFull() << endl;
//	cout << stack.isEmpty() << endl;
//	//cout << stack.pop() << endl;
//	cout << stack.count() << endl;
//	cout << stack.peek(2) << endl;
//	stack.change(2, 1);
//	cout << endl;
//	stack.print();
//	return 0;
//}