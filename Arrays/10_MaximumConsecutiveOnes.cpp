/*
Problem: Maximum Consecutive Ones
Platform: Coding Ninjas
Topic: Arrays
Time Complexity: O(n) - where n is the size of the array
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;
int consecutiveOnes(vector<int>& arr){
    int specificCount=0;
    int maxCount=0;
  
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=1){
            maxCount=max(maxCount,specificCount);
            specificCount=0;
        }
        else{
            specificCount+=1;
        }
    }
  
    maxCount=max(maxCount,specificCount);
  
    return maxCount;
}
