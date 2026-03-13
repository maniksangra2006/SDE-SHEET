#include<iostream>
#include<string>
#include<cstdlib>
#include<vector>
using namespace std;
vector<string> split(string s){
    vector<string> res;
    string ans="";
    for(int i=0;i<s.size();i++){
        if(s[i]=='.'){
            res.push_back(ans);
            ans="";
        }
        else {
            ans+=s[i];
        }
    }
  res.push_back(ans);
  return res;
}
int versions(string s1,string s2){
    vector<string> v1=split(s1);
    vector<string> v2=split(s2);
    int n =max(s1.size(),s2.size());
    for(int i=0;i<n;i++){
        int n1=(i<s1.size()) ? stoi(v1[i]) : 0;
        int n2=(i<s2.size()) ? stoi(v2[i]): 0;
        if(n1>n2) return -1;
        if(n1<n2) return 1;
    }
    return 0;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<versions(s1,s2);
}