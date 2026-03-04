#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n ;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cand1=0;
    int cand2=1;
    int cnt1=0;
    int cnt2=0;
    for(auto num:arr){
        if(num==cand1) cnt1++;
        else if(num==cand2) cnt2++;
        else if(cnt1==0){
         cand1=num;
         cnt1++;
        }
        else if (cnt2==0){
            cand2=num;
            cnt2++;
        }
        else {
            cnt1--;
            cnt2--;
        }
    }
    cnt1=cnt2=0;
    for(auto num :arr){
        if(num==cand1) cnt1++;
        if(num==cand2) cnt2++;
    }
    vector<int> ans;
    if(cnt1>n/3) ans.push_back(cand1);
    if(cnt2>n/3) ans.push_back(cand2);
     for(auto x :ans){
        cout<<x;
    }
}