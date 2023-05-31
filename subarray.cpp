//#include"iostream"
//#include <vector>
//using namespace std;
//
//vector<int> subArr(int arr[], int n, int s) {
//    vector<int> _res;
//    int _s = 0;
//    int _e = 0;
//    int _sum = 0;
//    
//    while (_e <= n) {
//        if (_sum < s) { _sum += arr[_e]; _e++; }
//        else if (_sum > s) { _sum -= arr[_s]; _s++; }
//        else  return { ++_s, _e };
//    }   
//}
//int main() {
//    int s = 12;
//    int n = 6;
//    int arr[] = { 2,3,8,1,5,6 };
//    vector <int> res = subArr(arr, n, s);
//
//    for (int i = 0; i < res.size(); i++) {
//        cout << res[i] << " ";
//    }
//}