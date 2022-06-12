
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int prefixMaxSums(int* arr, int n){
   int prefix[n];
   prefix[0] = arr[0];
   for(int i = 1; i < n; i++){
       prefix[i] = arr[i]+prefix[i-1];
   }
   int maxSum = INT_MIN;
   for(int i = 0; i < n; i++){
       for(int j = i; j < n; j++){
           int s = prefix[j]-prefix[i-1];
           maxSum = max(maxSum, s);
       }
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
    int s = prefixMaxSums(arr, n);
    cout<<s;
	return 0;
}