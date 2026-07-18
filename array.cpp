#include<iostream>
#include <climits>
using namespace std;

int main(){
  int arr[]={-3,4,5,-2,-6,9};
  int curr=0;
  int maxi=INT_MIN;
  int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){

        curr += arr[i];

        maxi = max(maxi,curr);

        if(curr<0){
            curr=0;
        }
    }

    cout<<"Maximum Sum = "<<maxi;

    return 0;
}



