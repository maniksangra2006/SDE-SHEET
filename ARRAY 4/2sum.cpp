 #include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
//O(n)
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int> arr(n,0);
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     unordered_map<int,int> mp;
     for(int i=0;i<n;i++){
        int need=target-arr[i];
        if(mp.find(need)!=mp.end()){
            cout<<mp[need]<<" "<<i;
            return 0;
        }
        mp[arr[i]]=i;
     }
      cout<<"NO PAIR EXIST";
}
//     vector<int> twoSum(vector<int>& nums, int target) {
//        int n=nums.size();         
 //       for(int i=0;i<n;i++){
 //           for(int j=i+1;j<n;j++){
 //               if(nums[i]+nums[j]==target)return{i,j};
 //           }
 //       }
 //       return {};
 //   }
