#include<iostream>
#include<vector>
using namespace std;
int ones(vector<int>&arr){
   int maxi=0;
   int cnt=0;
   for(int i=0;i<arr.size();i++){
    if(arr[i]==1){
         cnt++;
    maxi=max(cnt,maxi);
    }
   
   else {
    cnt=0;
   }
}
   return maxi;
}
int main(){
int n ;
cin>>n;
vector<int>arr(n,0);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<ones(arr);
 
}