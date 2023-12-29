// repeatedly swap two adjacent elements if they are in wrong order

// after every swap the largest element will get placed at the end or at the right place

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE SIZE OF THE ARRAY:";
    cin>>n;
    int arr[n];
    cout<<"ENTER THE ELEMENTS IN THE ARRAY:";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0 ; i<n-1;i++)
    {
        for(int j = 0 ; j < n-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int j = 0; j<n; j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}