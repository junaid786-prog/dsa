//#include "iostream"
//#include "vector"
//using namespace std;
//// ================  PROBLEMS =============== //
//void printArray(int arr[], int size) {
//	for (int i = 0; i < size; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//// p1: Reverse the array
//void reverseAnArray(int arr[], const int size) {
//	int* temp = new int[size];
//	
//	int j = size - 1;
//
//	for (int i = 0; i < size; i++) {
//		temp[i] = arr[j];
//		j--;
//	}
//	
//	for (int i = 0; i < size; i++) {
//		arr[i] = temp[i];
//	}
//}
//
//// p2: Find the maximum and minimum element in an array
//
//int findMin(int arr[], const int size) {
//	int min = arr[0];
//	
//	for (int i = 0; i < size - 1; i++) {
//		if (min > arr[i + 1])
//			min = arr[i + 1];
//	}
//
//	return min;
//}
//
//int findMax(int arr[], const int size) {
//	int max = arr[0];
//
//	for (int i = 0; i < size - 1; i++) {
//		if (max < arr[i + 1])
//			max = arr[i + 1];
//	}
//
//	return max;
//}
//
//// p3: Find the "Kth" max and min element of an array 
//int findKthMax(const int actualArr[], const int size, int k) {
//
//	if (k < 0 || k > size) {
//		cout << "Out of bound checking" << endl;
//		return 0;
//	}
//
//	int* arr = new int[size];
//	for (int i = 0; i < size; i++)
//		arr[i] = actualArr[i];
//
//	int j = 1;
//	for (int i = 0; i < size - 1; i++) {
//		for (int j = i + 1; j < size; j++) {
//			if (arr[i] < arr[j]) {
//				int temp = arr[j];
//				arr[j] = arr[i];
//				arr[i] = temp;
//			}
//		}
//	}
//	return arr[k-1];
//}
//
//// p4: Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
//void sortArrayOf012(int arr[], const int size) {
//	for (int i = 0; i < size; i++) {
//		if (arr[i] > 2 || arr[i] < 0)
//			cout << "out of bound" << endl;
//	}
//
//	int start = 0, end = size - 1;
//	int i = 0;
//	while (i <= end) {
//		switch (arr[i])
//		{
//		case 0: {
//			int temp = arr[start];
//			arr[start] = arr[i];
//			arr[i] = temp;
//			start++;
//			i++;
//			break;
//		}	
//		case 1:
//			i++;
//			break;
//		case 2: {
//			int temp = arr[end];
//			arr[end] = arr[i];
//			arr[i] = temp;
//			end--;
//			break;
//		}
//			
//		default:
//			break;
//		}
//	}
//}
//
//// p5: Move all the negative elements to one side of the array 
//void seperateNegative(int arr[], const int size) {
//	int j = 0;
//	for (int i = 0; i < size; i++) {
//		if (arr[i] < 0) {
//			if (i != j) {
//				int temp = arr[j];
//				arr[j] = arr[i];
//				arr[i] = temp;
//			}
//			j++;
//		}
//	}
//}
//
//// p6: Find the Union and Intersection of the two sorted arrays.
//void findUnionOfArrays(int arr1[], int size1, int arr2[], int size2) {
//
//	int i = 0, j = 0, common = 0;
//	while (i < size1 && j < size2) {
//		if (arr1[i] < arr2[j]) { cout << arr1[i] << " "; i++; }
//		else if(arr2[j] < arr1[i]){ cout << arr2[j] << " "; j++; }
//		else { cout << arr1[i] << " "; i++; j++; common++; }
//	}
//	while (i < size1) { cout << arr1[i++] << " "; }
//	while (j < size2) { cout << arr2[j++] << " "; }
//	
//}
//void findIntersectionOfArrays(int arr1[], int size1, int arr2[], int size2) {
//
//	int common = 0;
//	int i = 0, j = 0;
//	
//	for (int i = 0; i < size1; i++) {
//		for (int j = 0; j < size2; j++) {
//			if (arr1[i] == arr2[j]) {
//				cout << arr1[i] << " ";
//				common++;
//			}
//		}
//	}
//}
//
//// p7: Write a program to cyclically rotate an array by one.
//void cyclicallyRotateArray(int arr[], int s) {
//	int j = arr[s - 1];
//	for (int i = s - 1; i > 0; i--)
//		arr[i] = arr[i - 1];
//	arr[0] = j;
//}
//
//// p8: find Largest sum contiguous Subarray [V. IMP]
//void findLargestSumContiguousSubarray(int arr[], int s) {
//	// Using Algo -> no 
//}
//// p10: find duplicate in an array of N+1 Integers
//int duplicateInArray(int arr[], int size) {
//	//int _noOfDuplicates = 0;
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = i + 1; j < size; j++) {
//			if (arr[i] == arr[j]) {
//				return arr[i]; // for first duplicate
//			}
//		}
//	}
//	return -1;
//}
//// p : find common elements In 3 sorted arrays
//int commonInThreeArrays(int arr1[], int arr2[], int arr3[], int s1, int s2, int s3) {
//	int _commonIn2 = -1;
//	for (int i = 0; i < s1; i++)
//	{
//		for (int j = 0; j < s2; j++) {
//			if (arr1[i] == arr2[j]) _commonIn2 = arr1[i];
//		}
//	}
//	if (_commonIn2 == -1) return -1;
//
//	for (int i = 0; i < s1; i++)
//	{
//		for (int j = 0; j < s2; j++) {
//			if (arr2[i] == arr3[j]) return arr2[i];
//		}
//	}
//
//	return -1;
//}
//
//// p: find Largest sum contiguous Subarray [V. IMP]
//int maxSum(int arr[], int s) {
//	int max = 0;
//	for (int i = 0; i < s; i++)
//	{
//		int thisMax = 0;
//		for (int j = 0; j < s; j++)
//		{
//			thisMax += arr[j];
//			if (thisMax > max) {
//				max = thisMax;
//			}
//		}
//
//	}
//	return max;
//}
//
//// Knapsack problem:
//int knapSack(int size, int weight[], int values[], double capacity) {
//	if (size == 0 || capacity == 0) return 0;
//	else if (weight[size - 1] > capacity) return knapSack(size - 1, weight, values, capacity);
//	else {
//		return max(knapSack(size - 1, weight, values, capacity), knapSack(size - 1, weight, values, capacity - weight[size - 1]) + values[size - 1]);
//	}
//}
//
//// p: Find whether an array is a subset of another array
//bool isSubset(int arr[], int subArr[], int s1, int s2) {
//	//bool isSub = false;
//	int i = 0, count = 0;
//	int j = 0;
//	while (i < s1 && j < s2){
//		if (arr[i] != subArr[j]) { 
//			i++;
//			count = 0;
//		}
//		else if (arr[i] == subArr[j]) {
//			i++;
//			count++;
//			j++;
//		}
//	}
//	return count == s2 ? true : false;
//}
//
//bool isMatched(vector<int> arr, int num) {
//	for (int i = 0; i < arr.size(); i++)
//	{
//		if (arr[i] == num) return true;
//	}
//	return false;
//}
//// p: Given an array of size n and a number k, find all elements that appear more than " n/k " times.
//int elementsAppearance(int arr[], int n, int k) {
//	vector <int> v;
//	vector <int> v1;
//
//	for (int i = 0; i < n; i++)
//	{
//		int count = 0;
//		for (int j = 0; j < n; j++) {
//			if (arr[i] == arr[j]) count++;
//		}
//		if (count > n / k) {
//			v.push_back(arr[i]);
//		}
//	}
//	for (int i = 0; i < v.size(); i++)
//	{
//		if (!isMatched(v1, v[i])) {
//			v1.push_back(v[i]);
//		}
//	}
//
//	return v1.size();
//}
//
//// Find factorial of a large number
//long long int factorial(long long int n) {
//	if (n < 3)return n;
//	return n * factorial(n - 1);
//}
//long long int factorialByArr(long long int n) {
//	n += 1;
//	long long int* arr = new long long int[n];
//	arr[0] = 0;
//	arr[1] = 1;
//	arr[2] = 2;
//	for (int i = 3; i < n; i++)
//	{
//		arr[i] = arr[i - 1] * i;
//	}
//	return arr[n - 1];
//}
//
//// p: Find if string is rotation of other string
//bool checkRotation(string str1, string str2) {
//	if (str1.size() != str2.size()) return false;
//	int i = 0, j = str2.size() - 1, count = 0;
//	while (i < str1.size() && j >= 0) {
//		if (str1[i] == str2[j]) count++;
//		i++; j--;
//	}
//	return count == str1.size();
//}
//
//// p: check if string is valid shuffle of two strings
//bool isValidShuffle(string str1, string str2, string test) {
//	int i = 0, j = 0, k = 0, count = 0;
//	while (i < str1.size() && j < str2.size() && k < test.size()) {
//		if (test[k] == str1[i]) {
//			i++;
//			k++;
//		}
//		else if (test[k] == str2[j]) {
//			j++;
//			k++;
//		}
//		else {
//			i++; 
//			j++;
//		}
//	}
//	return k == test.size();
//}
//// Driver Function
//
//int main() {
//	/*int arr[] = { 10, 20, 30, 40, 50 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	printArray(arr, size);*/
//
//	/*reverseAnArray(arr, size);
//	printArray(arr, size);*/
//
//	/*cout << "Max: " << findMax(arr, size) << endl;
//	cout << "Min: " << findMin(arr, size) << endl;*/
//
//	/*int arr1[] = { 50, 20, 30, 10, 40 };
//	cout << findKthMax(arr1, size, 7) << endl;*/
//
//	/*int arr01[] = {0,1,0,1,2,1,0,1,1,1,2,1,0};
//	int size = sizeof(arr01) / sizeof(arr01[0]);
//	printArray(arr01, size);
//	sortArrayOf012(arr01, size);
//	printArray(arr01, size); */
//
//	/*int arr01[] = { 0,-1,10,-81,-2,1,0,1,1,-1,2,-1,0 };
//	int size = sizeof(arr01) / sizeof(arr01[0]);
//	printArray(arr01, size);
//	seperateNegative(arr01, size);
//	printArray(arr01, size);*/
//
//	int arr01[] = { 01,5,72,3, 5,8,-7 };
//	int arr02[] = { 5,72, 3,5,72,72, 5,5, 6, 5,6,5, 5, 5 };
//	int arr03[] = { 1,5, 33 };
//
//	int size1 = sizeof(arr01) / sizeof(arr01[0]);
//	int size2 = sizeof(arr02) / sizeof(arr02[0]);
//	int size3 = sizeof(arr03) / sizeof(arr03[0]);
//
//	/*printArray(arr01, size1);
//	printArray(arr02, size2);
//	findUnionOfArrays(arr01, size1, arr02, size2);
//	cout << endl;
//	findIntersectionOfArrays(arr01, size1, arr02, size2);*/
//
//	/*printArray(arr01, size1);
//	cyclicallyRotateArray(arr01, size1);
//	printArray(arr01, size1);*/
//
//	/*cout << duplicateInArray(arr01, size1); */
//
//	//cout << commonInThreeArrays(arr01, arr02, arr03, size1, size2, size3);
//
//	//cout << maxSum(arr01, size1);
//
//	/*int n = 9;
//	int W = 15;
//	int values[] = { 2,3,3,4,4,5,7,8,8 };
//	int weights[] = { 3,5,7,4,3,9,2,11,5 };
//	cout << knapSack(n, weights, values, W);*/
//
//	//cout << isSubset(arr01, arr02, size1, size2);
//
//	//cout << elementsAppearance(arr02, size2, 2);
//
//	/*cout << factorialByArr(20) << endl;*/
//	//cout << checkRotation("hello", "olleh") << endl;
//	cout << isValidShuffle("abdevillier", "hellowhid", "abwahid") << endl;
//	return 0;
//}
//
////87178291200 3628800