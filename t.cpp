//#include<iostream>
//#include<fstream>
//#include <iostream>
//#include<ctime>
//#include<cstdlib>
//#include<string>
//using namespace std;
//
//// C++ code to linearly search x in arr[] of size n.
//// If x is present then its location is return back, 
//// otherwise -1 (sentinal value) is return back.
//int search(long long int arr[], int n, int x)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		if (arr[i] == x)
//			return i;
//	return -1;
//}
//
//
//int read_file(long long int* (&arr)) {
//	string val;
//	int count = 0, i = 0;
//	string filename;
//	cout << "Enter file name alongwith path= ";
//	getline(cin, filename);
//
//	ifstream infile(filename.c_str());
//
//	if (!infile)
//		cout << "Can't open the file\n";
//
//	//cout << iif.tellg() << endl;
//
//	while (getline(infile, val, ',')) {
//
//		count++;
//	}
//
//	//cout << iif.tellg() << endl;
//	delete[](arr);
//	arr = new long long int[count];
//	infile.close();
//
//	ifstream f(filename);
//	//iif.seekg(0, ios::beg);
//	//cout << "position = " << f.tellg() << endl;
//
//	while (getline(f, val, ',')) {
//
//		arr[i] = stoll(val);
//
//		i++;
//	}
//
//	f.close();
//	return count;
//}
//// Driver code
//int main(void)
//{
//	time_t t1, t2;
//	srand(time(0));
//	long long int* arr = new long long int[1];
//	int s = read_file(arr);
//
//	cout << "=========================================================\n";
//
//	/*for (int i = 0; i < s; i++)
//		cout << arr[i] << "\t";
//	cout << endl;*/
//	int x;
//	/* cout << "Enter value to search: ";
//	 cin >> x;*/
//	x = 3967187292;
//	//int n = sizeof(arr) / sizeof(arr[0]);
//
//	time(&t1);
//	int result = search(arr, s, x);
//	time(&t2);
//
//	(result == -1)
//		? cout << "Element  is not present in array"
//		: cout << "Element " << x << " is present at index " << result;
//
//	cout << endl;
//	double sort_time = t2 - t1;
//	cout << "Searching time is : " << sort_time << " seconds" << endl;
//
//	return 0;
//}
//
