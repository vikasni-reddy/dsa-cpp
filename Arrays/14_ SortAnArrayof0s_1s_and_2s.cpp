/*
Problem: Sort An Array of 0s, 1s and 2s
Platform: Coding Ninjas
Topic: Arrays
Time Complexity: O(n) - where n is the size of the array
Space Complexity: O(1)
*/

#include <bits/stdc++.h> 
using namespace std;
void sortArray(vector<int>& arr, int n)
{
     int i=0;
     int j=0;
     int k=arr.size()-1;
     while(j<=k){
         if(arr[j]==1){
             j++;
         }
         else if(arr[j]==0){
             swap(arr[j],arr[i]);
             i++;
             j++;
         }
         else{
             swap(arr[j],arr[k]);
             k--;
         }
     }
}
