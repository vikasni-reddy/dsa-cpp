/*
Problem: Single Element
Platform: Leetcode
Topic: Arrays
Time Complexity: O(n) - where n is the size of the array
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
    int XOR=0;
  
    for(int i=0;i<nums.size();i++){
        XOR=XOR^nums[i];
    }
  
    return XOR;
}
