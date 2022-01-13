/*
a[]={1,2,3,7,5}
s=12
output=2 4(starting and end element)
*/

#include<iostream>
#include<limits.h>
using namespace std;

int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}

int s;
cout<<"Enter the sum:";
cin>>s;


for(int i=0;i<n;i++)
{ int sum=0;
    for(int j=i;j<n;j++)
    {
        if(sum<s)
        {
            sum=sum+a[j];
        }
        else if(sum==s)
        {
            cout<<i+1<<" "<<j;
            break;

        }
        else{
            continue;
        }
    }

}

}
