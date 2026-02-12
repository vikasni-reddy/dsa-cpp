/*
Problem: Linear Search
Platform: Coding Ninjas
Topic: Arrays
Time Complexity: O(n) - where n is the size of the array
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;
int linearSearch(int n, int num, vector<int> &arr)
{

    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i;
        }
    }

    return -1;
}
