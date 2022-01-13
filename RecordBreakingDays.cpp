/* Day is record breaker if
1. no. is larger than all previous.
2. no. is greater than next day
 */
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

    int rbd=0;
    int mx=INT_MIN;

    for(int i=0;i<n;i++)
    {
       //if the element is greater than max and to its next element then it is rbd
        if(mx==arr[i] && arr[i]>arr[i+1])

        {
            rbd++;

        }
        
        mx=max(mx,arr[i]);


    }
    cout<<rbd;
return 0;
}
