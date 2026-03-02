#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector<vector<int>>& arr,int n ){
 for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        swap(arr[i][j],arr[j][i]);
    }
 }
 for(int i=0;i<n;i++){
    reverse(arr.begin(),arr.end());
 }
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    rotate(arr,n);
     for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout <<arr[i][j] << " ";
        }
        cout << endl;
    }
}