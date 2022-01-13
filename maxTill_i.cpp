#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int maxv=INT_MIN;

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxv)
        {
            maxv=arr[i];
        }
        cout<<maxv<<" ";
    }
}
