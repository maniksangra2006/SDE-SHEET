#include<iostream>
#include<vector> 
#include<climits>// for int min and max ke liye 
using namespace std;
int maxsum(vector<int>& arr,int n ){
    int sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxi=max(sum,maxi);
        if(sum<0) sum=0;
    }
    return maxi;
}
int main(){
    int n ;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxsum(arr,n);
}