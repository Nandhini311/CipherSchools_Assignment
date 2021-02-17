#include <bits/stdc++.h>
using namespace std;
int MaxSubarray(int arr[], int n)
{
    //kadane's algorithm 
    int res = 0;
	int Max = arr[0];
	for(int i=1;i<n;i++)
	{
	    Max = max(Max+arr[i], arr[i]);
	    res = max(Max, res);
	}
	return res;
}

int main() {
	
     int arr[] = {5, 0, 6, 2, 3}, n = 5;
     cout<<MaxSubarray(arr, n);
    
}
