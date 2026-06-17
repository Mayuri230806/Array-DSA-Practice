#include<iostream>
#include<unordered_map>
using namespace std;


// it is a 2 ptr approach to solve the 2 sum problem in arr we take 2 ptr left ptr and right ptr left ptr initiallize with 0 and right ptr=n-1means right ptr is at the end.

int main(){
int arr[]={1,2,3,4,6,7};
int n=6;
int target=6;
int left=0;
int right=n-1;



while(left<right){
 int sum=arr[left]+arr[right];

  if(sum==target){        //two sum
    cout<<arr[left];
    cout<<arr[right];                                           
    break;
  }


else if(sum<target){
  left++;
}

else{
  right--;                   //tc=O(n log n) + O(n)
}
}
return 0;
}




// Hashing Approach for Two Sum
// Hashing is also an optimal approach for solving the Two Sum problem.
// In hashing, we create an unordered_map (hash map) to store the elements
// that we have already visited.

// For each element, we calculate the required value:
// required = target - arr[i]

// Then we check whether the required value already exists in the hash map.
// If it exists, we have found a valid pair whose sum equals the target.
// Otherwise, we store the current element in the hash map and continue.


int main(){
int arr[]={1,2,3,4,6,7};
int n=6;
int target=6;


unordered_map<int,int>mp;    //it is hash use to store the value and index
for(int i=0;i<n;i++){        //traverse an array
int require=target-arr[i];  

if(mp.find(require)!=mp.end()){
  cout<<"pair found:"<<require<<""<<arr[i];    //tc=O(n)
  break;
}

mp[arr[i]]=i;
}
}


