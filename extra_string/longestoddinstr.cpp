#include<iostream>
#include<string>
using namespace std;
string check(string& s){
    int n =s.size();
    for(int i=n-1;i>=0;i--){
    if(s[i]-'0'%2!=0){
        return s.substr(0,i+1);
    }
    }
    return "";
}
int main(){
    string s;
    cin>>s;
    cout<<check(s);
}