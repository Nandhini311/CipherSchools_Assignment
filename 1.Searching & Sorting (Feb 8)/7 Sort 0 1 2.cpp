#include <bits/stdc++.h>
using namespace std;

int* sort012(int arr[],int n)
{
    int low=0, high=n-1, mid=0;
    while(mid<=high)
    {
        if(arr[mid]==0)
          { swap(arr[mid++],arr[low++]);
           continue;
          }
        else if(arr[mid]==1)
            mid++;
        else if(arr[mid]==2)                    
           {swap(arr[mid],arr[high--]);
           continue;
           }
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
   int arr[]={0,1,2,0,1,2,1,0,2,0,1,1};
   sort012(arr,12);
   print(arr,12);
    return 0;
}
