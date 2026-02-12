/*
Problem: Rotate Array
Platform: Leetcode
Topic: Arrays
Time Complexity: O(n) - where n is the size of the array
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int>& nums, int k) {
    
    if(k>nums.size()){
        k=k%nums.size();
    }
  
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());

}
