#include<iostream>
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

    for(int i=0; i<n; i++)
    {
        int csum=0;
        for(int j=i; j<n; j++)
        {
            csum=csum+arr[j];
            cout<<csum<<endl;
        }
    }
    return 0;
}
