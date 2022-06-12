
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int kadaneMaxSums(int* arr, int n){
   int maxSum = INT_MIN, currSum = 0;
   for(int i = 0; i <  n; i++){
       currSum += arr[i];
        if(maxSum<currSum)
            maxSum = currSum;
        if(currSum<0)
            currSum = 0;
   }
   return maxSum;
}

int main() {
	// your code goes here
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int s = kadaneMaxSums(arr, n);
    cout<<s;
	return 0;
}