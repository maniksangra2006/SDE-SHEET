#include<iostream>
#include<string>
#include<unordered_set>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_set<char>seen;
    int l=0;
    int n=s.size();
    int maxi=0;
    for(int r=0;r<n;r++){
        while(seen.count(s[r])){//agar char repeat hoga toh left se erase karege aur l++ kar dege 
            seen.erase(s[l]);
            l++;
        }
        seen.insert(s[r]); //har iteration ke baad right++ karke inseet karege 
        maxi=max(maxi,r-l+1);
        // cout << s.substr(l, r - l + 1) << endl; agar har ek substr print karwani ho toh
    }
    cout<<maxi;
}