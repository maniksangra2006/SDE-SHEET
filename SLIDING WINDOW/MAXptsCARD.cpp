#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    vector<int> arr(n,0);
    int k;
    cin>>k;
     int res=0;
 for(int i=0;i<k;i++) res+=arr[i];
 int curr=res;
 for(int i=k-1;i>=0;i--){
    curr-=arr[i];
    curr+=arr[n-k+i];
    curr=max(res,curr);
 }
 cout<<curr;
}