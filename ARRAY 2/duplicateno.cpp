#include<iostream>
#include<vector>
using namespace std;
int find(vector<int>& arr,int n ){
    unordered_map<int,int> mp;
    for(auto num : arr){
        mp[num]++;
    
    if(mp[num]>1){
        return num;
    }
}
return -1;
}
int main(){
    int n ;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=find(arr,n);
    cout<<res;
}