#include<bits/stdc++.h>
using namespace std;
int main(){
int n ;
cin>>n;
vector<int> arr(n,0);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int k;
cin>>k;
int l=0;
int maxi=0;
int cnt0=0;
for(int r=0;r<n;r++){
    if(arr[r]==0) cnt0++;
    while(cnt0>k){
        if(arr[l]==0) cnt0--;
        l++;
    }
    maxi=max(maxi,r-l+1);
}
cout<<maxi;
}