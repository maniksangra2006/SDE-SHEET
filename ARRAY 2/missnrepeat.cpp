#include<iostream>
#include<vector>
using namespace std;
vector<int> findTwoElement(vector<int>& arr, int n) { 
    vector<int> freq(n + 1, 0);
    int repeating = -1, missing = -1; 
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    } 
    for(int i = 1; i <= n; i++) {
        if(freq[i] == 2)
            repeating = i;
        else if(freq[i] == 0)
            missing = i;
    }
 return {repeating, missing};
}
int main(){
     int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 vector<int> result = findTwoElement(arr, n);
  cout << result[0] << " " << result[1];
}