/*
Problem: Move Zeroes To End
Platform: Coding Ninjas
Topic: Arrays
Time Complexity: O(n) - where n is the size of the array
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;
void pushZerosAtEnd(vector<int> &arr) 
{
	int non_zero_index=0;
  
	for(int i=0;i<arr.size();i++){
		if(arr[i]!=0){
			swap(arr[i],arr[non_zero_index]);
			non_zero_index++;
		}
	}
  
}
