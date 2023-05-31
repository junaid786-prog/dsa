//// ============ Linear Search ====================== //
//
////#include <iostream>
////#include<ctime>
////#include<cstdlib>
////
////using namespace std;
////
////// C++ code to linearly search x in arr[] of size n.
////// If x is present then its location is return back, 
////// otherwise -1 (sentinal value) is return back.
////int search(int arr[], int n, int x)
////{
////	int i;
////	for (i = 0; i < n; i++)
////		if (arr[i] == x)
////			return i;
////	return -1;
////}
////
////// Driver code
////int main(void)
////{
////	time_t t1, t2;
////	srand(time(0));
////
////	int arr[] = { 2, 3, 4, 10, 40 };
////	int x;
////	// cout << "Enter value to search: ";
////	// cin >> x;
////	x = 10;
////	int n = sizeof(arr) / sizeof(arr[0]);
////
////	time(&t1);
////	int result = search(arr, n, x);
////	time(&t2);
////
////	(result == -1)
////		? cout << "Element is not present in array"
////		: cout << "Element is present at index " << result;
////
////	cout << endl;
////	double sort_time = t2 - t1;
////	cout << "Searching time is : " << sort_time << " seconds" << endl << endl;
////
////	return 0;
////}
//
//// ============== Binary Search Iterative ================== //
//
////#include <iostream>
////#include<ctime>
////#include<cstdlib>
////
////using namespace std;
////
////// prototype declaration
////int binarySearchIter(int[], int, int, int);
////
////// C++ code to search x in arr[] of size n.
////// If x is present then its location is return back, 
////// otherwise -1 (sentinal value) is return back.
////int search(int arr[], int n, int x)
////{
////    return binarySearchIter(arr, 0, n - 1, x);
////}
////
////// A iterative binary search function. It returns 
////// location of x in given array arr[l..r] if present, 
////// otherwise -1 
////int binarySearchIter(int arr[], int l, int r, int x)
////{
////    while (l <= r) {
////        int m = l + (r - l) / 2;
////
////        // Check if x is present at mid 
////        if (arr[m] == x)
////            return m;
////
////        // If x greater, ignore left half 
////        if (arr[m] < x)
////            l = m + 1;
////
////        // If x is smaller, ignore right half 
////        else
////            r = m - 1;
////    }
////
////    // if we reach here, then element was 
////    // not present 
////    return -1;
////}
////
////// Driver code
////int main(void)
////{
////    time_t t1, t2;
////    srand(time(0));
////
////    int arr[] = { 2, 3, 4, 10, 40 };
////    int x;
////    // cout << "Enter value to search: ";
////    // cin >> x;
////    x = 10;
////    int n = sizeof(arr) / sizeof(arr[0]);
////
////    time(&t1);
////    int result = search(arr, n, x);
////    time(&t2);
////
////    (result == -1)
////        ? cout << "Element is not present in array"
////        : cout << "Element is present at index " << result;
////
////    cout << endl;
////    double sort_time = t2 - t1;
////    cout << "Searching time is : " << sort_time << " seconds" << endl << endl;
////
////    return 0;
////}
//
//// ============== Binary Search Recursive ================== //
//
//#include <iostream>
//#include<ctime>
//#include<cstdlib>
//
//using namespace std;
//
//// prototype declaration
//int binarySearchRecr(int[], int, int, int);
//
//// C++ code to search x in arr[] of size n.
//// If x is present then its location is return back, 
//// otherwise -1 (sentinal value) is return back.
//int search(int arr[], int n, int x)
//{
//    return binarySearchRecr(arr, 0, n - 1, x);
//}
//
//// A recursive binary search function. It returns 
//// location of x in given array arr[l..r] if present, 
//// otherwise -1 
//int binarySearchRecr(int arr[], int l, int r, int x)
//{
//    if (r >= l) {
//        int mid = l + (r - l) / 2;
//
//        // If the element is present at the middle 
//        // itself 
//        if (arr[mid] == x)
//            return mid;
//
//        // If element is smaller than mid, then 
//        // it can only be present in left subarray 
//        if (arr[mid] > x)
//            return binarySearchRecr(arr, l, mid - 1, x);
//
//        // Else the element can only be present 
//        // in right subarray 
//        return binarySearchRecr(arr, mid + 1, r, x);
//    }
//}
//
//// Driver code
//int main(void)
//{
//    time_t t1, t2;
//    srand(time(0));
//
//    int arr[] = { 2, 3, 4, 10, 40 };
//    int x;
//    // cout << "Enter value to search: ";
//    // cin >> x;
//    x = 10;
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    time(&t1);
//    int result = search(arr, n, x);
//    time(&t2);
//
//    (result == -1)
//        ? cout << "Element is not present in array"
//        : cout << "Element is present at index " << result;
//
//    cout << endl;
//    double sort_time = t2 - t1;
//    cout << "Searching time is : " << sort_time << " seconds" << endl << endl;
//
//    return 0;
//}
//
