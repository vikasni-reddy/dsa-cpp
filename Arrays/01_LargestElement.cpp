/*
Problem: Largest Element in the Array
Platform: Coding Ninjas
Topic: Arrays
Time Complexity: O(n) - where n is the size of the array
Space Complexity: O(1)
*/

#include <bits/stdc++.h> 
using namespace std;
int largestElement(vector<int> &arr, int n) {
    int maxi=INT_MIN;
  
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
  
    return maxi;
}
