#include "iostream"
using namespace std;

// Printing numbers
void printNumber(int n) {
	if (n < 10) { cout << n; return; }
	printNumber(n / 10);
	cout << n % 10;
}
void printReverseNumber(int n) {
	if (n < 10) { cout << n; return; }
	cout << n % 10;
	printReverseNumber(n / 10);
}
// multiply power product of array elems
double multiply(double val, int n) {
	if (n == 1) return val;
	double ans = multiply(val, n - 1);
	return val + ans;
}
double power(double val, int n) {
	if (n == 0) return 1;
	double ans = power(val, n - 1);
	return val * ans;
}
double product(int arr[], int size) {
	if (size == 1)return arr[0];
	double ans = product(arr, size - 1);
	return ans * arr[size - 1];
}
//max min in array
int max(int arr[], int size) {
	if (size == 1)return arr[0];
	int ans = max(arr, size - 1);
	return ans > arr[size - 1] ? ans : arr[size - 1];
}
int min(int arr[], int size) {
	if (size == 0) return arr[0];
	int ans = min(arr, size - 1);
	return ans < arr[size - 1] ? ans : arr[size - 1];
}
int main() {
	int arr[10] = { 2,4,7,10,5,8,11,34,67,9 };
	//cout << product(arr, 3);
	cout << max(arr, 10) << endl;
	cout << min(arr, 10) << endl;
}