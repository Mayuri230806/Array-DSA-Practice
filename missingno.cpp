#include<iostream>
using namespace std;

//missing number

int main(){

// int arr[]={1,2,4,5,6,7};
// int n=7;
// int sum=n*(n+1)/2;
// int s2=0;

// for(int i=0;i<6;i++){                      //optimal approach
// s2+=arr[i];
// }
// cout<<sum-s2;
// return 0;




int arr[]={1,2,3,4,5};
int n=6;

int xor1=0;
int xor2=0;

for(int i=1;i<=n;i++){
    xor1 ^= i;
}

for(int i=0;i<n-1;i++){
    xor2 ^= arr[i];      //optimal approach 
}

cout << (xor1 ^ xor2);

}

 