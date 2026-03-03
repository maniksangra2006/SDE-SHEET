#include<iostream>
#include<vector>
using namespace std;
bool check(vector<vector<int>>&arr,int target){
int n =arr.size();
int m  =arr[0].size();
int low=0;
int high =n*m-1;
while(low<=high){
    int mid=(low+high)/2;
    int row=mid/m;
int col=mid%m;
if(arr[row][col]==target) return true;
else if (arr[row][col]<target) low=mid+1;
else high=mid-1;
}
return false;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
       for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    int target;
    cin>>target;
    if(check(matrix,target)){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }
}