#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    int maxsum=INT_MIN;


    for(int i=0; i<n; i++)
    {
    int csum=0;
    for(int j=i; j<n; j++)
        {
         csum=csum+arr[j];
        maxsum=max(maxsum,csum);
        }


    }
    cout<<maxsum<<endl;
}
