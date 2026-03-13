#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n =s.size();
    int l=0;
    int cnt=0;
    unordered_map<char,int> char_cnt={{'a',0},{'b',0},{'c',0}};
    for(int i=0;i<s.size();i++){
        char_cnt[s[i]]++;
        while(char_cnt['a']>0&& char_cnt['b']>0&& char_cnt['c']>0){
            cnt+=s.size()-i;
            char_cnt[s[l]]--;
            l++;
        }
    }
    return cnt;
}