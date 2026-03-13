#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=0;
    int maxi=0;
    int n =s.size();
    unordered_set<char> seen;
    for(int r=0;r<n;r++){
     while(seen.count(s[r])){
        seen.erase(s[l]);
        l++;
     }
     seen.insert(s[r]);
     maxi=max(maxi,r-l+1);
    }
    cout<<maxi;
}