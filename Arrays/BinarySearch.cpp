#include <iostream>
using namespace std;

int binarySearch(int* arr, int n, int k){
    int l = 0, r = n-1, mid;
    while(l<=r){
        mid = l+(r-l)/2;
        if(arr[mid] == k)
            return mid;
        else if(arr[mid]<k){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    return -1;
}

int main() {
	// your code goes here
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<binarySearch(arr, n, k);
	return 0;
}