#include<bits/stdc++.h>
using namespace std;
int helper(vector<int>& arr,int k){
    unordered_map<int,int>mp;
    int l=0;
    int cnt=0;
    int n =arr.size();
    for(int r=0;r<n;r++){
     mp[arr[r]]++;
    while(mp.size()>k){
        mp[arr[l]]--;
        if(mp[arr[l]]==0) mp.erase(arr[l]);
        l++;
    }
    cnt+=r-l+1;
    }
    return cnt;
    }
int solve(vector<int>& arr,int k,int n){
    if(k==0) return 0;
    return helper(arr,k)-helper(arr,k-1);
}
int main(){
    int n ;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<solve(arr,k,n);
}
