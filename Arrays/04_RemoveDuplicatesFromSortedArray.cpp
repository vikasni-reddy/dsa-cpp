/*
Problem:  Remove Duplicates from Sorted Array
Platform: Coding Ninjas
Topic: Arrays
Time Complexity: O(n) - where n is the size of the array
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &arr, int n) {
	int j=0;
  
	for(int i=1;i<n;i++){
		if(arr[i]>arr[j]){
			swap(arr[i],arr[j+1]);
			j++;
		}
	}
  
	return j+1;
}
