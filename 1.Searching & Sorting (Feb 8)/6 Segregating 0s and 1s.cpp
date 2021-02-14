#include <bits/stdc++.h>
using namespace std;

//two pointer approach
int* sort01(int arr[],int n)
{
    int low=0, high=n-1;
    while(low<high)
    {
        if(arr[low]==1&&arr[high]==0)
        {
            swap(arr[low++],arr[high--]);
        }
        else if(arr[low]==0)
            low++;
        else if(arr[high]==1)
            high--;
    }
    return arr;
}
void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
     {
         cout<<arr[i];
     }
}
int main()
{
   int arr[]={0,1,0,1,1,0,0,1,1};
   sort01(arr,9);
   print(arr,9);
    return 0;
}
