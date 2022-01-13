/*arithematic array-contain at least two int and difference b/w consicutive int are equal
sample test- 10  7  4  6  8  10  11
differences-  -3  -3  2  2  2   1
longest subarray- 2 2 2
output-4
*/
#include<iostream>
#include<algorithm>

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


    int pd=arr[0]-arr[1];

    int ans=2;
    int curr=2;

    for(int j=2;j<=n;j++)
    {
        if(pd== arr[j]-arr[j+1])
        {
            curr++;
        }
        else{
            pd=arr[j]-arr[j+1];
            curr=2;
        }
        ans=max(ans,curr);
    }
    cout<<ans<<endl;

return 0;
}
