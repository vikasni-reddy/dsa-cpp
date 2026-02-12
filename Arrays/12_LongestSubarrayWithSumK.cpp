/*
Problem: Longest Subarray With Sum K
Platform: Coding Ninjas
Topic: Arrays
Time Complexity: O(n) (Average Case)- where n is the size of the array
Space Complexity: O(1)
*/


#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k) {
    unordered_map<int,int> mp;
    int n=a.size();
    long long prefixSum=0;
    int maxLen=0;
  
    for(int i=0;i<n;i++){
        prefixSum+=a[i];
      
        if(prefixSum==k){
            maxLen=max(maxLen,i+1);
        }
        else if(mp.find(prefixSum-k)!=mp.end()){
            int index=mp[prefixSum-k];
            maxLen=max(maxLen,i-index);
        }

        if(mp.find(prefixSum)==mp.end()){
            mp[prefixSum]=i;
        }
    }
  
    return maxLen;
}
