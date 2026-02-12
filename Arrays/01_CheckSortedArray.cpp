/*
Problem: Check Sorted Array
Platform: Coding Ninjas
Topic: Arrays
Time Complexity: O(n) - where n is the size of the array
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;
int isSorted(int n, vector<int> a) {
    
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            return 0;
        }
    }
  
    return 1;
}
