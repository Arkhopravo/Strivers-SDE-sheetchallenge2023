#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.

	sort(arr.begin(), arr.end());
	for(int i=0; i<arr.size()-1; i++){
        if(arr[i]==arr[i+1])
        return arr[i];
    }
    return -1;
}
