#include<bits/stdc++.h>
using namespace std;
 int main(){
int n ;
cin>>n;
vector<int> arr(n,0);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int l=0;
int maxi=0
unordered_map<int,int> basket;
for(int r=0;r<n;r++){
  basket[arr[r]]++;
  if(basket.size()>2){
    basket[arr[l]]--;
    if(basket[arr[l]]==0) basket.erase(arr[l]);
    l++;
  }
  maxi=max(maxi,r-l+1);
}
cout<<maxi;
 }