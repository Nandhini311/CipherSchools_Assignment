#include <bits/stdc++.h>
using namespace std;

//using bottom left
int SearchSortedMatrix(int arr[4][4], int x, int n)
{
    if (n == 0)
        return -1;
  
    if (x < arr[0][0] || x > arr[n - 1][n - 1])
        return -1;
   
    int i = n-1, j = 0; 
    while (i >= 0 && j < n) 
    {
        if (arr[i][j] == x) 
        {
            cout << "Element Found at "<< i << j;
            return 1;
        }
        if (arr[i][j] < x)
            j++;
        else
            i--;
    }
    
    cout<<"Element not found";
    return 0;
}



int main()
{
    int arr[4][4] = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };
    SearchSortedMatrix(arr, 37, 4);
    return 0;
}
