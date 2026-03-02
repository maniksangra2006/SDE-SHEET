#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
void binarr(vector<int> &arr,int n ){
     int l=0;
     int mid=0;
     int high=n-1;
     while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[l]);
            mid++;
            l++;
        }
        else if (arr[mid]==1) mid++;
        else if(arr[mid]==2) {
            swap(arr[mid],arr[high]);
            high--;
        }
     }
}
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    binarr(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}