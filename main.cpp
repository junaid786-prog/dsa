#include <iostream>
#include<vector>
using namespace std;

bool isPrime(int nmb, int it = 2) {
	if (nmb <= 2)return true;
	if (nmb % it == 0)return false;
	if (it * it > nmb) return true; // mean it is increased by nmb but not completey divide
	isPrime(nmb, it + 1);
}

void printPattern(int n, int m, bool flag)
{
   // Print m.
   cout << m << " ";

   // If we are moving back toward the n and
   // we have reached there, then we are done
   if (flag == false && n == m)
       return;

   // If we are moving toward 0 or negative.
   if (flag) {
       // If m is greater, then 5, recur with true flag
       if (m - 5 > 0)
           printPattern(n, m - 5, true);
       else // recur with false flag
           printPattern(n, m - 5, false);
   }
   else // If flag is false.
       printPattern(n, m + 5, false);
}

void printArr(int arr[], int n)
{
   for (int i = 0; i < n; i++)
       cout << arr[i] << " ";
   cout << endl;
}
void generateUtil(int x, int arr[], int curr_sum, int curr_idx)
{

   // If current sum is equal to x,
   // then we found a sequence
   if (curr_sum == x)
   {
       printArr(arr, curr_idx);
       return;
   }

   // Try placing all numbers from
   // 1 to x-curr_sum at current index
   int num = 1;

   // The placed number must also be
   // smaller than previously placed
   // numbers and it may be equal to
   // the previous stored value, i.e.,
   // arr[curr_idx-1] if there exists
   // a previous number
   while (num <= x - curr_sum && (curr_idx == 0 || num <= arr[curr_idx - 1]))
   {

       // Place number at curr_idx
       arr[curr_idx] = num;

       // Recur
       generateUtil(x, arr, curr_sum + num,
           curr_idx + 1);

       // Try next number
       num++;
   }
}

// A wrapper over generateUtil()
void generate(int x)
{

   // Array to store sequences on by one
   int* arr = new int[x];
   generateUtil(x, arr, 0, 0);
}
int main() {
   generate(4);
}