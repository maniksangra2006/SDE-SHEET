#include<bits/stdc++.h>
using namespace std;
int atmost(vector<int> & arr,int goal){
    int l=0;
    int n =arr.size();
    int sum=0;
    int cnt=0;
    for(int r=0;r<n;r++){
        sum+=(arr[r]%2);
    
    while(sum>goal){
        sum-=(arr[l]%2);
        l++;
    }
    cnt+=(r-l+1);
}
return cnt;
}
int subarray(vector<int>& arr,int goal){
   return atmost(arr,goal)-atmost(arr,goal-1);
}
int main(){
    int n ;
    cin>>n;
    vector<int> arr(n,0);
    int goal;
    cin>>goal;
    cout<<subarray(arr,goal);
}