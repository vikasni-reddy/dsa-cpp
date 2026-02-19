/*
Problem: Majority element
Platform: Coding Ninjas
Topic: Arrays
Time Complexity: O(n) - where n is the size of the array
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;
int findMajorityElement(int arr[], int n) {
	int element=arr[0];
	int count=0;
	for(int i=0;i<n;i++){
		if(count==0){
			element=arr[i];
			count++;
		}
		else if(element!=arr[i]){
			count--;
		}
		else if(element==arr[i]){
			count++;
		}
	}  // Majority element
	//edge case
	int majority=0;
	for(int i=0;i<n;i++){
		if(element==arr[i]){
			majority+=1;
		}
	}
	if(majority>n/2){
		return element;
	}
	return -1;
}
