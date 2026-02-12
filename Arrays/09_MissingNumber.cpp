/*
Problem: Missing Number
Platform: Coding Ninjas
Topic: Arrays
Time Complexity: O(N) - where N is the size of the array
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>&a, int N) {
    int xorRange=0;
    int xorArray=0;
  
    for(int i=1;i<=N;i++){
        xorRange=xorRange^i;
    }
  
    for(int i=0;i<N-1;i++){
        xorArray=xorArray^a[i];
    }
  
    return xorArray^xorRange;
}
