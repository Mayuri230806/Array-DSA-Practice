#include<iostream>
using namespace std;

int main()
{
    int arr[]={7,7,5,4,7,5,5,5,4,7,4,4,4,4,4};
    int n=15;

    int count=0;
    int element=-1;

    // Moore's Voting Algorithm
    for(int i=0;i<n;i++)
    {
        if(count==0)
        {
            count=1;
            element=arr[i];
        }
        else if(element==arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    cout<<"Majority Candidate = "<<element<<endl;

  
    count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==element)
            count++;
    }

    if(count>n/2)
        cout<<"Majority Element = "<<element;
    else
        cout<<"No Majority Element";

    return 0;
}