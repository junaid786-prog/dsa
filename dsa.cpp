#include "iostream"
using namespace std;
// To Find nth Fibonacci Number
int fibByR(int n) {
	if (n < 2)return n;
	return fibByR(n - 1) + fibByR(n - 2);
}
int fibByA(int n) {
	if (n < 2)return n;
	int* arr = new int[n+1];
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	return arr[n];
}
int fibByI(int n) {
	if (n < 2)return n;
	int a = 2, b = 0, c = 1, sum = 0;
	while (a <= n) {
		sum = b + c;
		b = c;
		c = sum;
		a++;
	}
	return sum;
}

void move(int count, char start, char finish, char temp)
{
	if (count > 0)
	{
		move(count - 1, start, temp, finish);
		cout << "Move disk " << count << " from " << start << " to " << finish << "." << endl;
		move(count - 1, temp, finish, start);
	}
}
// 0 1 1 2 3 5 8

int main() {
	int a, b = 0;
	while (b != -1) {
		cout << "Want To Repeat" << endl;
		cin >> b;

		cout << "Enter Number: \t";
		cin >> a;
		//cout << "Number By Recursion: " << fibByR(a-1) << endl;
		cout << "Number By Iteration: " << fibByA(a-1) << endl;
	}

	/*int disks;
	cout << "Please enter count of disks: ";
	cin >> disks;

	move(disks, 'A', 'C', 'B');*/

	return 0;
}