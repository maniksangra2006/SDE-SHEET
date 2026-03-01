#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> pascal(int n){
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        vector<int> res(i+1,1);
        for(int j=1;j<i;j++){
         res[j]=ans[i-1][j]+ans[i-1][j-1];
        }
        ans.push_back(res);
    }
    return ans;
}
int main(){
    int n ;
    cin>>n;
    vector<vector<int>> triangle=pascal(n);
    for(int i=0;i<triangle.size();i++){
        for(int j=0;j<triangle[i].size();j++){
            cout<<triangle[i][j]<<" ";
        }
        cout<<endl;
    }
}