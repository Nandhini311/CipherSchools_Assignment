#include <bits/stdc++.h>
using namespace std;

void alternatesorting(int arr[],int n)
{
    
     sort(arr,arr+n);
     int i=0, j=n-1;
     while(i<j){
         cout<<arr[j--];
         cout<<arr[i++];
     }
     if(n%2 !=0)
     cout<<arr[i];
}

int main()
{
   int arr[]={8,3,4,2,9,3,1,2};
   alternatesorting(arr,8);
    return 0;
}
