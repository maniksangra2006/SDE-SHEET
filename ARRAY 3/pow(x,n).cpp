#include<iostream>
using namespace std;
int main(){
  double x;
  cin>>x;
  int n ;
  cin>>n;
  long long  power=n;
  double ans=1.0;
  if(power<0) {
    x=1/x;
  power=-power;
  }
     while(power>0){
        if(power%2==1){
             ans*=x;
        }
        x*=x;
        power/=2;
     }
     return ans;
}