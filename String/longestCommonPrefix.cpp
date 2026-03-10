#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
   int n ;
   cin>>n;
   cin.ignore();
   vector<string> strs(n);
   for(int i=0;i<n;i++){
    getline(cin,strs[i]);
   }
string ans="";
for(int i=0;i<strs[0].size();i++){
    for(int j=0;j<strs.size()-1;j++){
        if(strs[j][i]!=strs[j+1][i]) cout<<ans;
    }
   ans+=strs[0][i];
}
cout<<ans;
}