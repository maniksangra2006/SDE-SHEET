#include<iostream>
#include<vector>
using namespace std;
long long merge(vector<int>& arr,int left,int mid,int right){
    vector<int> temp;
    int i=left;
     long long incnt = 0;
    int j=mid+1;
    while(i<=mid && j<=right){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else {
            temp.push_back(arr[j]);
             incnt+=(mid-i+1);
             j++;
        }
    }
     while(i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= right) {
        temp.push_back(arr[j]);
        j++;
    }
    for(int k = left; k <= right; k++) {
        arr[k] = temp[k - left];
    }
    return incnt;
}
    long long mergesort(vector<int>& arr,int left,int right){
    long long cnt=0;
    if(left<right){
        int mid =(left+right)/2;
        cnt+=mergesort(arr,left,mid);
        cnt+=mergesort(arr,mid+1,right);
        cnt+=merge(arr,left,mid,right);
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<mergesort(arr,0,n-1);
}