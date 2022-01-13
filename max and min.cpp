#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int mx=INT_MIN;
    int mn=INT_MAX;


     for(int i=0;i<n;i++)
    {
    if(arr[i]>mx)
    {
        mx=arr[i];
    }

    if(arr[i]<mn)
    {
        mn=arr[i];
    }

    }

    cout<<mx<<" "<<mn;

}
