#include <bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[], int x, int n)
{
    int low=0, high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(mid==0||arr[mid-1]!=arr[mid])
          return mid;
        else if(arr[mid]<x)
           low=mid+1;
        else
           high=mid-1;
    }
}

int lastOccurence(int arr[], int x, int n)
{
    int low=0, high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(mid==n-1||arr[mid+1]!=arr[mid])
          return mid;
        else if(arr[mid]>x)
           high=mid-1;
        else
           low=mid+1;
    }
}

int main()
{
    int arr[] = { 1,1,2,2,2,2,3,4,4};
    cout<<firstOccurence(arr, 2, 9);
    cout<<lastOccurence(arr, 2, 9);
    return 0;
}
