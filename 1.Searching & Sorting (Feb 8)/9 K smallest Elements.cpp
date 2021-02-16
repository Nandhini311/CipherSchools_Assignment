#include<bits/stdc++.h>
using namespace std;

void ksmallestelement(int arr[], int n, int k)
{
    sort(arr, arr+n);
    int kth_smallestelement = arr[k-1];
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=kth_smallestelement && c<k)
        { cout<<arr[i]<<" ";
          c++;
        }
    }
}
int main()
{
    int arr[]={1, 3, 6, 2, 9, 3, 8, 12};
    int n=8;
    int k=3;
    ksmallestelement(arr, n, k);
    return 0;
}
