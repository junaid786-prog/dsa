//// ============ linear search ====================== //
//
//#include <iostream>
//#include<ctime>
//#include<fstream>
//#include<string>
//#include<cstdlib>
//
//using namespace std;
//
//// c++ code to linearly search x in arr[] of size n.
//// if x is present then its location is return back, 
//// otherwise -1 (sentinal value) is return back.
//int search(int arr[], int n, int x)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		if (arr[i] == x)
//			return i;
//	return -1;
//}
//int readfromfile(int * arr) {
//	string filename = "data/data-file-5.csv";
//
//	cout << "enter filename: " << endl;
//	cin >> filename;
//	filename = "data/" + filename;
//
//	long long int n, size = 0; char a; string v;
//	fstream datafile(filename, ios::in);
//	if (!datafile) { cout << "error" << endl; return 0; }
//	while (datafile.good()) {
//		getline(datafile, v, ',');
//		n = stoi(v);
//		size++;
//	}
//	arr = new int[1000000];
//	int p = sizeof(*arr) / sizeof(arr[0]);
//	cout << p;
//	/*int i = 0;
//	for (int i = 0; i < 30; i++)arr[i] = i;
//	for (int i = 0; i < 30; i++)arr[i] = i;
//	
//	while (datafile.good()) {
//		getline(datafile, v, ',');
//		n = stoi(v);
//		arr[i] = n;
//		cout << arr[i] << " ";
//		i++;
//	}*/
//	datafile.close();
//	return size;
//}
//// driver code
//int main(void)
//{
//	time_t t1, t2;
//	srand(time(0));
//	int* arr = new int [100];
//	int n = readfromfile(arr);
//	//cout << arr[0];
//	int x;
//	// cout << "enter value to search: ";
//	// cin >> x;
//	x = 10;
//	//int n = sizeof(arr) / sizeof(arr[0]);
//
//	/*time(&t1);
//	int result = search(arr, n, x);
//	time(&t2);
//
//	(result == -1)
//		? cout << "element is not present in array"
//		: cout << "element is present at index " << result;
//
//	cout << endl;
//	double sort_time = t2 - t1;
//	cout << "searching time is : " << sort_time << " seconds" << endl << endl;*/
//
//	return 0;
//}