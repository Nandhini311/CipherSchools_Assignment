#include <bits/stdc++.h>
using namespace std;

int* alternatesorting(int arr[],int n)
{
    
     sort(arr,arr+n);
     int i=0, j=n-1;
     while(i<j){
         cout<,arr[j--];
         cout<<arr[i++];
     }
     if(n%2 !=0)
     cout<<arr[i];
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
   alternatesorting(arr,12);
   print(arr,12);
    return 0;
}
