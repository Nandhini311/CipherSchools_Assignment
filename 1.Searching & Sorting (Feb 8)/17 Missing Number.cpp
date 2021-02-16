#include<bits/stdc++.h>
using namespace std;

int findMissingNumber(int arr[], int n)
{
    int num = n+1;
    //sum of n numbers
    int n_sum =  num*(num+1)/2;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return n_sum-sum;
}
int main()
{
    int arr[]={1,3,4,5,6,7,8};
    cout<<findMissingNumber(arr,7);
    return 0;
}
