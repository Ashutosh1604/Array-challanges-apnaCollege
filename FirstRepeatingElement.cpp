/* repeating element with lowest index
eg- 1 5 3 4 3 5 6
output- element no. 2
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

int N=20;
int idx[N];
int min_idx=INT_MAX;
for(int i=0;i<N;i++)
{
    idx[i]=-1;
}

for(int i=0;i<n;i++)
{
    if(idx[a[i]]==-1)
    {
        idx[a[i]]=i;
    }
    else
    {

        min_idx=min(min_idx,idx[a[i]]);

    }

}
if(min_idx==INT_MAX)
    {
        cout<<"No repeating element found"<<endl;
    }
    else{
        cout<<"repeating element with minimum index is: "<<min_idx<<endl;
    }

    return 0;

}
