/*
Problem: Second largest element in the array
Platform: Coding Ninjas
Topic: Arrays
Time Complexity: O(n) - where n is the size of the array
Space Complexity: O(1)
*/

#include <bits/stdc++.h> 
using namespace std;
int findSecondLargest(int n, vector<int> &arr)
{
    int maxi=arr[0];
    int sec_maxi=INT_MIN;
    
    for(int i=1;i<n;i++){
        
        if(arr[i]>maxi){
            sec_maxi=maxi;
            maxi=arr[i];
        }
        else if(arr[i]>sec_maxi && arr[i]<maxi){
            sec_maxi=arr[i];
        }
      
    }
  
    if(sec_maxi==INT_MIN){
        return -1;
    }
  
    return sec_maxi;
}
