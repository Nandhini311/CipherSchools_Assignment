#include<bits/stdc++.h>
using namespace std;

int stockbuysell(int arr[], int start, int end)
{
    if(end<=start)
       return 0;
    
    int result=0;
    for(int i=start;i<end;i++)
    {
        for(int j=i+1;j<=end;j++)
          {
              if(arr[j]>arr[i])
              {
                  int current_profit = arr[j]-arr[i]+stockbuysell(arr,start,i-1)+stockbuysell(arr,j+1,end);
                  result = max(result, current_profit);
              }
          }
      }
      return result;
}

int efficientstockbuysellsolution(int arr[], int n)
{
    int profit = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]<arr[i])
        {
            profit += arr[i]-arr[i-1];        
        }
    }
    return profit;
}


int main()
{
    int arr[]={1,5,3,8,12};
    cout<<stockbuysell(arr, 0, 4)<<<<endl;
    cout<<efficientstockbuysellsolution(arr, 5);
    return 0;
}
