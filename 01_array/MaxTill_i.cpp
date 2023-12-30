//Given an array arr[] of size n. for every i from 0 to n-1 output max(arr[0], arr[1], arr[2], arr[3],.....,arr[i])

#include<iostream>
using namespace std;
int main()
{
    int n;
    
    cout<<"ENTER THE SIZE OF THE ARRAY:";
    cin>>n;
    int arr[n];
    cout<<"ENTER THE ELEMENT IN THE ARRAY";
    for(int i=0; i< n; i++)
    {
        cin>>arr[i];
    }
    int max=-19999999 ;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        cout<<"MAXIMUM ELEMENT TILL "<< i<<"ELEMENT OF THIS ARRAY IS:"<<max<<endl;
    }
    return 0;
}