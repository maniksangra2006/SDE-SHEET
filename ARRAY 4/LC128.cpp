#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int temp;
    unordered_set<int>st;
    for(int i=0;i<n;i++){
       cin>>temp;
     st.insert(temp);
    }
    int maxi=1;
    for(auto it :st){
        if(st.find(it-1)==st.end()){// check karege ki it ka pichla exist toh ni karta na taki new sequence start ho 
         int cnt=1;
         int x=it;
         while(st.find(x+1)!=st.end()){//agar it ka next exist kare toh hi count badhayege 
           x++;
            cnt++;
         }
         maxi=max(cnt,maxi);
        }
    }
    cout<<maxi;
}
