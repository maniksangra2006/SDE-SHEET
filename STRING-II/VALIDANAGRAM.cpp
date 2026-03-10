#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<< "TRUE";
    else cout<<"FALSE";
}