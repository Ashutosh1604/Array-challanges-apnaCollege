/*
arr[]={0 -9 1 3 -4 5}

make a bool array and mark  present +ve int as T and absent as F

check[]={T T F T F T}
*/
#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    //creating a array
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //creating another array and initialise it with false
    int N=50;
    bool check[N];
    for(int i=0;i<N;i++)
    {
        check[i]=false;
    }

    //in first array if any value is positive mark it true in 2nd array
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            check[arr[i]]=true;
        }
    }

    //the 1st false element in 2nd array is the missing no.
    for(int i=0;i<N;i++)
    {
        if(check[i]==false)
        {
            cout<<i<<endl;
            return 0;
        }
    }
}
