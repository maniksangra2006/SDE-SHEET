#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n ;
  cin>>n;
  vector<int> arr(n,0);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int freq=0;
  int ans =0;
  for(int i=0;i<n;i++){
    if(freq==0){
        ans=arr[i];
    }
    if(ans=arr[i]) freq++;
    else freq--; 
  }
  cout<<"Majority Element is : "<<ans;
}