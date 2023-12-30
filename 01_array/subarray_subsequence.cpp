// subarray => continuous part
// subsequence => can be non-continuous part also from array


// QUESTION => sum of all subarrays

// given a array of size n. output sum of each subarray of the given array.

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
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=i;j<n;j++)
        {
          sum = sum + arr[j];
           cout<<"sum till every element is:"<< sum<<endl;
        }

    }
    return 0;
}