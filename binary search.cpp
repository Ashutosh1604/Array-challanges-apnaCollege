
#include<iostream>
using namespace std;


int binary_search(int arr[],int n,int k)
{
    int low=0;
    int high=n;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;

        if(arr[mid]==k)
        {
            return mid;
        }
        if(arr[mid]<k)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
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



    cout<<"element found at location:"<<binary_search(arr,n,k)+1;

}
