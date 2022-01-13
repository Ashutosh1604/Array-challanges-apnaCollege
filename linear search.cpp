#include<iostream>
using namespace std;


linear_search(int arr[],int n,int k)
{
    for(int j=0; j<n; j++)
    {
        if(arr[j]==k)
        {
            return j;
        }


    }

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int k;
    cin>>k;



    cout<<"element found at location:"<<linear_search(arr,n,k)+1;




}
