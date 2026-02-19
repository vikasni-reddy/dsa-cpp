/*
Problem: Two Sum
Platform: Leetcode
Topic: Arrays
Time Complexity: O(N) - where N is the size of the array
Space Complexity: O(N)
*/

#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        if(mp.find(target-nums[i])!=mp.end()){
            return {i,mp[target-nums[i]]};
        }
        mp[nums[i]]=i;
    }
    return { -1,-1};
}
