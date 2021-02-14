#include <iostream>

using namespace std;

int main()
{
    int arr[]={3,1,0,6,2,2};
    int n=6,res=0;
    int lmax[n], rmax[n];
    lmax[0]=arr[0];
    for(int i=1;i<n;i++)
    {
       lmax[i]=max(arr[i],lmax[i-1]);
    }
    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rmax[i]=max(rmax[i-1],arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        res=res+(min(lmax[i],rmax[i])-arr[i]);
    }
    cout<<res;
    return 0;
}
