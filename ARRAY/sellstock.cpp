#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;
int maxprofit(vector<int> & arr,int n ){
  int maxprofit=0;
  int mini=arr[0];
  for(int i=0;i<n;i++){
    int cost=arr[i]-mini;
     maxprofit=max(maxprofit,cost);
     mini=min(mini,arr[i]);
  }
  return maxprofit;
}
 
int main(){
    int n ;
    cin>>n;
     vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxprofit(arr,n);
}
