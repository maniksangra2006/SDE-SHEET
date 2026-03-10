#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int check(const string &s,int l,int r){
    while(l>=0 && r<s.size()&& s[l]==s[r]){
     l--;
     r++;
    }
    return r-l-1;
}
int main(){
    string s;
    getline(cin,s);
    int n =s.size();
    int strt=0;
    int maxlen=0;
    for(int i=0;i<n;i++){
        int len1=check(s,i,i);
        int len2=check(s,i,i+1);
        int maxi=max(len1,len2);
        if(maxi>maxlen){
            maxlen=maxi;
            strt=i-(maxi-1)/2;
        }
    }
    cout<<s.substr(strt,maxlen);
}