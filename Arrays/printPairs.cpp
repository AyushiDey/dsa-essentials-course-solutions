
#include <iostream>
using namespace std;

void printPairs(int* arr, int n){
   for(int i = 0; i < n; i++){
       for(int j = i+1; j < n; j++){
           cout<<"("<<arr[i]<<","<<arr[j]<<")"<<"\n";
       }
       cout<<"\n";
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
    printPairs(arr, n);
	return 0;
}