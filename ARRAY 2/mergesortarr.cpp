#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& arr, int m, vector<int>& arr1, int n){
   for(int j=0,i=m;j<n;j++){
    arr[i]=arr1[j];
    i++;
   }
   sort(arr.begin(),arr.end());
}
int main(){
    int m;
    int n;
    cin>>m;
    cin>>n;
    vector<int>arr(m+n);
    vector<int> arr1(n);
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    merge(arr,m,arr1,n);
    for(auto num : arr){
        cout<<num<<" ";
    }
}