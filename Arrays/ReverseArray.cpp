
#include <iostream>
using namespace std;

void reverseArray(int* arr, int n){
   int l = 0, r = n-1;
   while(l<r){
       swap(arr[l], arr[r]);
       l++;
       r--;
   }
}

int main() {
	// your code goes here
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    reverseArray(arr, n);
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
	return 0;
}