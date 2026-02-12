/*
Problem: Merge 2 Sorted Array
Platform: Coding Ninjas
Topic: Arrays
Time Complexity: O(n + m) - where n and m are the sizes of arrays a and b
Space Complexity: O(n + m)
*/

#include<bits/stdc++.h>
using namespace std;
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n=a.size();   //Size of a
    int m=b.size();   //Size of b
    int i=0;   //Index of a
    int j=0;   //Index of b
    vector<int> ans;
  
    while(i<n && j<m){
        if(a[i] == b[j]){
          
            if(ans.empty() || ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            i++;
            j++;
          
        }
        else if(a[i]<b[j]){
          
            if(ans.empty() || ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            i++;
          
        }
        else{
          
            if(ans.empty() || ans.back()!=b[j]){
                ans.push_back(b[j]);
            }
            j++;
          
        }
    }
  
    while(i<n){
      
        if(ans.empty() || ans.back()!=a[i]){
            ans.push_back(a[i]);
        }
        i++;
      
    }
  
    while(j<m){
      
        if(ans.empty() || ans.back()!=b[j]){
            ans.push_back(b[j]);
        }
        j++;
      
    }
    return ans;

}
