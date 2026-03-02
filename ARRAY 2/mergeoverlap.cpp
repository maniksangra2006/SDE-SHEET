#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& intervals,int n ){
     vector<vector<int>> ans;
     sort (intervals.begin(),intervals.end());
     ans.push_back(intervals[0]);
     for(int i=1;i<n;i++){
       if(intervals[i][0]<=ans.back()[1]){
        ans.back()[1]=max(ans.back()[1], intervals[i][1]);
       }
       else{
        ans.push_back(intervals[i]);
       }
     }
     return ans;
}
int main(){
    int n ;
    cin>>n;
    vector<vector<int>>intervals(n,vector<int>(2));
    for(int i=0;i<n;i++){
        cin>>intervals[i][0]>>intervals[i][1];
    }
    vector<vector<int>> res=merge(intervals,n);
    for(auto interval: res){
     cout<<interval[0]<<" "<<interval[1]<<endl;
    }
}