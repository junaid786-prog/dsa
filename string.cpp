#include "iostream"
#include "string"
#include "vector"

using namespace std;

//============================ STRINGS ========================\\

// p: reverse a string
void reverseString(string& s) {
	string b = s;
	int i = 0, j = s.size() - 1;
	while (i < s.size() && j >= 0) {
		b[i] = s[j]; j--; i++;
	}
	s = b;
}

// p: Check whether a String is Palindrome or not
bool isPalindrome(string& s) {
	int i = 0, j = s.size() - 1, count = 0;
	while (i < s.size() / 2 && j >= s.size() / 2)
	{
		if (s[i] == s[j]) count++; 
		i++; j--;
	}
	return (count == s.size() / 2) ? true : false;
}
bool isRepeated(string arr, char c) {
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == c) return true;
	}
	return false;
}
// p: Find Duplicate characters in a string
string duplicateChars(string s) {
	string a = "";
	string b = "";
	for (int i = 0; i < s.size(); i++)
	{
		for (int j = i + 1; j < s.size(); j++) {
			if (s[i] == s[j]) {
				a += s[i];
			}
		}
	}
	for (int i = 0; i < a.size(); i++)
		if (!isRepeated(b, a[i])) b.push_back(a[i]);
	return b;
}

// p: Write a Program to check whether a string is a valid shuffle of two strings or not
bool isValidShuffle(string s1, string s2, string toCheck) {
	int i = 0, j = 0, k = 0, c = 0;
	while (i < s1.size() && j < s2.size() && k < toCheck.size()) {
		if (toCheck[k] == s1[i]) { i++; c++; k++; }
		else if (toCheck[k] == s2[j]) { j++; c++; k++; }
		else { i++; j++; }
	}
	return c == toCheck.size() ? true : false;
}

// p: Recursively print all sentences that can be formed from list of word lists
const int COLS = 3;
const int ROWS = 3;

void printSentences(string arr[ROWS][COLS], int row, int col, string ar[ROWS]) {
	ar[row] = arr[row][col]; // adding current word of current row

	if (row == ROWS - 1) // Base case if last row has come then print whole line 
	{
		for (int i = 0; i < ROWS; i++)
			cout << ar[i] << " ";
		cout << endl;
		return;
	}
	for (int i = 0; i < COLS; i++) {
		if (arr[row + 1][i] != " ") printSentences(arr, row + 1, i, ar);

	}
}

void print(string arr[ROWS][COLS]) {

	string ar[ROWS]; // To store words (single word from one line) to make sentence

	for (int i = 0; i < COLS; i++) // To print all sentences starting from words of ist row
	{
		if (arr[0][i] != " ")
			printSentences(arr, 0, i, ar);
	}
}

// p: print all possible palindromic partitions of string
bool isPalindromic(string s, int start, int last) {
	while (start < last) {
		if (s[start] != s[last]) {
			return false;
		}
		start++;
		last--;
	}
	return true;
}
// vector <vector <string> > => vector containing vectors of string data type
void allPalindrome(vector <vector <string> >& all_palindromes, vector <string>& current_palindrome, string str, int start, int size) {
	if (start >= size) {
		all_palindromes.push_back(current_palindrome);
		return;
	}

	for (int i = start; i < size; i++)
	{
		if (isPalindromic(str, start, i)) {
			current_palindrome.push_back(str.substr(start, i - start + 1));
			allPalindrome(all_palindromes, current_palindrome, str, i + 1, size);
			current_palindrome.pop_back();
		}
	}
}
void printAllPartitions(string s) {
	vector<vector<string>> allPalindromes;
	vector<string> currentPalindrme;
	int size = s.size(), start = 0;

	allPalindrome(allPalindromes, currentPalindrme, s, start, size);

	for (int i = 0; i < allPalindromes.size(); i++) {
		for (int j = 0; j < allPalindromes[i].size(); j++)
		{
			cout << allPalindromes[i][j] << " ";
		}
		cout << endl;
	}
}
// p: find is number is palindromic recursively

int reverse(int nmb) {
	static int res = 0;
	if (nmb == 0) {
		return res;
	}
	int digit = nmb % 10;
	res = res * 10 + digit;
	reverse(nmb / 10);
}
bool isPalindromic(int number) {
	return reverse(number) == number;
}

// p: find all possible strings of length k with n chars (n^k)
void printAllStrings(char c[], string str, int n, int k) {
	if (k == 0) {
		cout << str << endl;
		return;
	}
	for (int i = 0; i < n; i++)
	{
		string newString = str + c[i];
		printAllStrings(c, newString, n, k - 1);
	}
}
void print(char c[], int n, int k) {
	printAllStrings(c,"", n, k);
}
int main() {
	int n; cin >> n;
	int i = 1, j = 0;
	
	return 0;
}
