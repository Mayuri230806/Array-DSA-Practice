#include<iostream>
#include <algorithm>
using namespace std;

int main(){
  int arr[]={2,3,4,6,7,8};
  int n= sizeof(arr)/sizeof(arr[0]); 
  int k=2;
  k=k % n;

  reverse(arr,arr+n);
  reverse(arr,arr+k);
  reverse(arr+n,arr+k);
  cout << "Rotated Array: ";    //optimal approach but it use predefine functions 

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}



// this approach cannot use reverse() predefine fxn

#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {2,3,4,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;

    k = k % n;

    
    reverseArray(arr, 0, n-1);
    reverseArray(arr, 0, k-1);
    reverseArray(arr, k, n-1);

    cout << "Rotated Array: ";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}



