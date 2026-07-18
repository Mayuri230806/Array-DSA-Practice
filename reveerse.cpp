#include<iostream>
using namespace std;

int main(){
int arr[]={ 2,3,6,7,9};
int n = sizeof(arr) / sizeof(arr[0]);
int left=0;
int right=n-1;

while(left<right){
swap(arr[left],arr[right]);
left++;
right--;
}
cout<<"reverse";

for(int i=0;i<n;i++){
cout<<arr[i];
}
return 0;
}
