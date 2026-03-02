#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nxtpermu(vector<int> &arr,int n ){
      int k=-1;
      for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            k=i;
            break;
        }
      }
      if(k==-1){
        reverse(arr.begin(),arr.end());
      }
      for(int i=n-1;i>k;i--){
        if(arr[i]>arr[k]){
            swap(arr[i],arr[k]);
        }
      }
      reverse(arr.begin()+k+1,arr.end());
}
int main(){
     int n ;
     cin>>n;
     vector<int> arr(n,0);
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     nxtpermu(arr,n);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
}