#include<bits/stdc++.h>
using namespace std;

int vootingMooreAlgo(int arr[],int n)
{
    int count = 1, mas_index=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[mas_index])
           count++;
        else
           count--;
           if(count == 0)
           mas_index = i;
           count = 1;
     }
     
     int c = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[mas_index])
        c++;
    }
    if(c>=n/2)
    return c;
    else
    return -1;
    }
    
    
 int majorityelement(int arr[],int n)
{
    map <int, int> h;
    for(int i=0;i<n;i++)
    {
        h[arr[i]]++;
    }
    
    for(auto x: h)
    {
        if(x.second>=n/2)
           return x.second;
    }
    return -1;
}


int main()
{
    int arr[]={1,2,2,6,3,5,6,6,6,6,6};
    int n=11;
    cout<<majorityelement(arr, n);
    cout<<vootingMooreAlgo(arr, n);
    return 0;
}
