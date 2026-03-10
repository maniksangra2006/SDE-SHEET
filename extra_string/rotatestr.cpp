#include<iostream>
using namespace std;
int main(){
    string s,goal;
    cin>>s>>goal;
    if(s.size()!=goal.size()) {
        cout<<"FALSE"; 
        return 0;
    }
    string temp=s+s;
    if(temp.find(goal)!=string::npos) cout<<"TRUE";
    else cout<<"false";
    return 0;
}