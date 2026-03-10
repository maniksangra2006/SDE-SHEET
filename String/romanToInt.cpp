#include<iostream>
#include<string>
using namespace std;
int char2num(char a ){
    switch(a){
        case 'I' : return 1;
        case 'V' : return 5;
        case 'X' : return 10;
        case 'L' : return 50;
        case 'C' : return 100;
        case 'D' : return 500;
        case 'M' : return 1000;
        default : return 0;
    }

}
int main(){
    string s;
    getline(cin,s);
    int n  =s.size();
    int res=0;
    for(int i=0;i<n;i++){
        if(i+1<n && char2num(s[i])<char2num(s[i+1])){
            res-=char2num(s[i]);
        }
        else {
            res+=char2num(s[i]);
        }
    }
    cout<<res;
}