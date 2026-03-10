#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n =s.size();
    int num=atoi(s.c_str());
    cout<<num;
}