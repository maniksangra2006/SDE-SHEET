#include<iostream>
#include<vector>
using namespace std;
int remove(vector<int>&arr){
    int i=0;
    for(int j=1;j<arr.size();j++){
        if(arr[i]!=arr[j]){
     i++;
     arr[i]=arr[j];
        }
    }
    return i+1;
}
int main(){
int n ;
cin>>n;
vector<int>arr(n,0);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int l=remove(arr);
for(int i=0;i<l;i++){
     cout<<arr[i]<<"       ";
}
}