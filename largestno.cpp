#include<iostream>
#include<algorithm>
using namespace std;



// largest element in array

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;       
    sort(arr,arr+n);      //brute force approach  TC=o(nogn)
    cout<<arr[n-1];

    return 0;
}




// there is no better approach




int main(){
    int arr[]={1,2,3,4,5,6};
     int n=6; 
    int largest=arr[0];
    for(int i=0;i<6;i++){
       if (arr[i]>largest)        //optimal approach  TC=O(n)
        largest=arr[i];
         }
       cout<<largest<<endl;
}